#include "process.h"
#include "syscall_tab.h"
#include <sys/reg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/ptrace.h>

char *read_string (int child, unsigned long addr) {
	char *val = malloc(4096);
	int allocated = 4096, read = 0;
	unsigned long tmp =0;
	while(1) {
		if (read + sizeof (tmp) > allocated) {
			allocated *= 2;
			val = realloc (val, allocated);
		}
		tmp = ptrace(PTRACE_PEEKDATA, child, addr + read);
		if(errno != 0) {
			val[read] = 0;
			break;
		}
		memcpy(val + read, &tmp, sizeof tmp);
		if (memchr(&tmp, 0, sizeof tmp) != NULL) break;
		read += sizeof tmp;
	}
	free (val);
	return val;
}

int process_unit(int child, struct user_regs_struct regs)
{
	char buff[4096];

	memset(buff, 0, 4096);
	
	printf("%s(", g_syscall_table[regs.orig_rax].name);
	uint8_t *i = &g_syscall_table[regs.orig_rax].rdi;
	long int *t = &regs.rdi;
	while(*i != NONE)
	{
		if (*i == STRING)
			printf("%s, ",  read_string(child, *t));
		else if (*i == PTR)
			printf("%lx, ", *t);
		else if (*i == UNSIGNED)
			printf("%lu, ",  *t);
		else if (*i == SIGNED)
			printf("%ld\n", *t);
		i += sizeof(uint8_t);
		t += sizeof(long int);
	}
	printf("\n");
	// if (g_syscall_table[regs.orig_rax].rdi == STRING)
	// if (g_syscall_table[regs.orig_rax].rsi == STRING)
		// printf("%s",  read_string(child, regs.rsi));

	// printf("%s  ", g_syscall_table[regs.orig_rax].name);
	// printf("%ld, %ld, %ld", regs.rdi, regs.rsi, regs.rdx);
	// printf( "[%lx],\n", regs.rip);

	return 0;
}
