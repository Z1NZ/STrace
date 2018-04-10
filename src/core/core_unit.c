#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <errno.h>
#include <string.h>
#include "core.h"
#include "syscall_tab.h"

int core_unit(char **path)
{
	int status;
	int wait_val;
	struct user_regs_struct uregs;
	pid_t 					child;
	int						kill_ret;
	int 					counter;

	wait_val = 0;
	kill_ret = 0;
	counter = 0;
	child = fork();
	if (child == -1)
		perror("fork");
	else if (child == 0)
	{
		printf("[%s][%s]", *path, *path+2);
		if (execvp(path[1], path+2) == -1)
			perror("execvp");
		exit(0);
	}
	else // parent process
	{
		kill(child, SIGSTOP);
		ptrace(PTRACE_SEIZE, child, NULL, NULL);
		waitpid(child, &status, 0);
		while (1)
		{
			ptrace(PTRACE_SYSCALL, child, 0, 0);
			waitpid(child, &status, 0);
			ptrace(PTRACE_GETREGS, child, NULL, &uregs);
			printf("The child made a system call %ld\t", (long)uregs.orig_rax);
			printf("%s\n", g_syscall_table[uregs.orig_rax].name);
			if (uregs.orig_rax == 231)
			{
				printf("%d\n", counter);
				exit(0);
			}
			ptrace(PTRACE_SYSCALL, child, 0, 0);
			waitpid(child, &status, 0);
			counter++;
		}
	}
	return (0);
}
