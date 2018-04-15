#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <sys/syscall.h>
#include <sys/reg.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <errno.h>
#include <string.h>
#include "core.h"
#include "tools.h"

int core_unit(char **path, char **penv)
{
	int status;
	int wait_val;
	struct user_regs_struct uregs;
	pid_t 					child;
	sigset_t				del;

	char *bin_path;
	if (!(bin_path = get_binary_path(*(path +1))))
	{
		perror("error bin path");
		exit(-1);
	}
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
			{
				dprintf(2, "+++ exited with %d +++\n", WEXITSTATUS(status));
				break;
			}

			orig_eax = ptrace(PTRACE_PEEKUSER, child, 4 * ORIG_EAX, NULL);
			printf("%ld\n", orig_eax);
			process_unit(uregs);
			// ptrace(PTRACE_SYSCALL, child, 0, 0);
			// waitpid(child, &status, 0);
		}
	}
	free(bin_path);
	return (0);
}
