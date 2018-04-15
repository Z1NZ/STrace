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
#include "tools.h"

int core_unit(char **path, char **penv)
{
	int status;
	int wait_val;
	struct user_regs_struct uregs;



	char *bin_path = get_binary_path(*(path +1));
	child = fork();
	if (child == -1)
		perror("fork");
	else if (child == 0)
	{
		if (execve(bin_path, path+1, penv ) == -1)
		{
			perror("execve");
			exit(-1);
		}
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
			if(ptrace(PTRACE_GETREGS, child, NULL, &uregs) == -1)
				break;
			printf("status [%d] ==== ", status);
			printf("The child made a system call %ld\t", (long)uregs.orig_rax);
			printf("%s\n", g_syscall_table[uregs.orig_rax].name);
			ptrace(PTRACE_SYSCALL, child, 0, 0);
			waitpid(child, &status, 0);
		}
	}
	free(bin_path);
	return (0);
}
