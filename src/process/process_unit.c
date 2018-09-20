#include "process.h"
#include "syscall_tab.h"
#include <sys/reg.h>



// ========== test this form internet =========
// reg_val[1] = ptrace (PTRACE_PEEKUSER, child, 4 * EBX, NULL);
// char *filepath = read_string(child, reg_val[1]);

// char *read_string (int child, unsigned long addr) {
//     char *val = malloc(4096);
//     int allocated = 4096, read = 0;
//     unsigned long tmp =0;
//     while(1) {
//         if (read + sizeof (tmp) > allocated) {
//             allocated *= 2;
//             val = realloc (val, allocated);
//         }
//         tmp = ptrace(PTRACE_PEEKDATA, child, addr + read);
//         if(errno != 0) {
//             val[read] = 0;
//             break;
//         }
//         memcpy(val + read, &tmp, sizeof tmp);
//         if (memchr(&tmp, 0, sizeof tmp) != NULL) break;
//         read += sizeof tmp;
//     }
//     free (val);
//     return val;
// }





int process_unit(struct user_regs_struct regs)
{
	char buff[4096];

	memset(buff, 0, 4096);
	
	printf("%s(%ld, \n", g_syscall_table[regs.orig_rax].name, regs.rdi);

	// printf("%s\n", g_syscall_table[regs.orig_rax].name);
	      // printf("Write called with "
                 // "%ld, %ld, %ld", regs.rdi, regs.rsi, regs.rdx);
	// printf( "%lX", regs.rip );
	return 0;
}
