#include "process.h"
#include "syscall_tab.h"

int process_unit(struct user_regs_struct regs)
{
	printf("%s\n", g_syscall_table[regs.orig_rax].name);
	      printf("Write called with "
                 "%ld, %ld, %ld\n", regs.rdi, regs.rsi, regs.rdx);
	printf( "%lX\n", regs.rip );
	return 0;
}
