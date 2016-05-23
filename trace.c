#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <stdlib.h>
#include <signal.h>
#include <errno.h>
#include <string.h>

// int main()
// {
//     pid_t pid = fork();
//     assert(pid != -1);
//     int status;
//     long readme = 0;
//     if (pid)
//     {
//         readme = 42;
//         printf("parent: child pid is %d\n", pid);
//         assert(pid == wait(&status));
//         printf("parent: child terminated?\n");
//         assert(0 == status);
//     }
//     else
//     {
//         pid_t tracee = getppid();
//         printf("child: parent pid is %d\n", tracee);
//         sleep(1); // give parent time to set readme
//         assert(0 == ptrace(PTRACE_ATTACH, tracee));
//         assert(tracee == waitpid(tracee, &status, 0));
//         printf("child: parent should be stopped\n");
//         printf("child: peeking at parent: %ld\n", ptrace(PTRACE_PEEKDATA, tracee, &readme));
//     }
//     return 0;
// }

int main(void)
{
	long orig_rax;
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
		execl("/bin/ls", "ls", NULL);
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
			printf("The child made a system call %ld\n", (long)uregs.orig_rax);
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
