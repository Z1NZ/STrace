#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();
    assert(pid != -1);
    int status;
    long readme = 0;
    if (pid)
    {
        readme = 42;
        printf("parent: child pid is %d\n", pid);
        assert(pid == wait(&status));
        printf("parent: child terminated?\n");
        assert(0 == status);
    }
    else
    {
        pid_t tracee = getppid();
        printf("child: parent pid is %d\n", tracee);
        sleep(1); // give parent time to set readme
        assert(0 == ptrace(PTRACE_ATTACH, tracee));
        assert(tracee == waitpid(tracee, &status, 0));
        printf("child: parent should be stopped\n");
        printf("child: peeking at parent: %ld\n", ptrace(PTRACE_PEEKDATA, tracee, &readme));
    }
    return 0;
}
/*
int main(void)
{
	long orig_rax;
	int status;
	int wait_val;
	struct user_regs_struct uregs;
	pid_t 					child;
	pid_t 					tracee;

	wait_val = 0;
	child = fork();
	if (child == -1)
		perror("fork");
	else if (child == 0) // child process
	{
		tracee = getppid();
		ptrace(PTRACE_SEIZE, tracee, NULL, NULL);
		execl("/bin/ls", "ls", NULL);
	}
	else // parent process
	{
		waitpid(child, &status, 0); // wait child process to finish
		orig_rax = ptrace(PTRACE_PEEKUSER, tracee, ORIG_RAX, NULL);
		printf("The child made a system call %lu\n", (long)orig_rax);
		ptrace(PTRACE_CONT, tracee, 0, 0);
	}
	return (0);
}
*/