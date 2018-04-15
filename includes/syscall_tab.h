
#include <stdint.h>

typedef struct s_syscall
{
	char*name; // Name of syscall
	uint16_t rax; // Syscall number
	uint8_t rdi;
	uint8_t rsi;
	uint8_t rdx;
	uint8_t r10;
	uint8_t r8;
	uint8_t r9;
}t_syscall;



enum e_syscall
{
	STRUCT_ITIMERSPEC_PTR,
	CONST_HAR_PTR,
	CONST_SIGSET_T_PTR,
	STRUCT_LINUX_DIRENT_PTR,
	UID_T,
	STRUCT_SIGINFO_PTR,
	STRUCT_SEMBUF_PTR,
	CONST_STRUCT_MQ_ATTR_PTR,
	LONG,
	AIO_CONTEXT_T,
	STRUCT_IO_EVENT_PTR,
	AIO_CONTEXT_T_PTR,
	STRUCT_PT_REGS_PTR,
	STRUCT_RLIMIT_PTR,
	STRUCT_KEXEC_SEGMENT_PTR,
	STRUCT_RUSAGE_PTR,
	OFF_T_PTR,
	STRUCT_STATFS_PTR,
	STRUCT_POLL_FD_PTR,
	LOFF_T_PTR,
	UNSIGNED_CHAR_PTR,
	STRUCT_SIGACTION_PTR,
	VOID_PTR,
	QID_T,
	MODE_T,
	STRUCT_UTIMBUF_PTR,
	CONST_CAP_USER_DATA_T,
	MQD_T,
	STRUCT_MQ_ATTR_PTR,
	STRUCT_EPOLL_EVENT_PTR,
	UNSIGNED_INT_PTR,
	STRUCT_SIGEVENT_PTR,
	OFF_T,
	CONST_STRUCT_RLIMIT64_PTR,
	TIMER_T_PTR,
	U32,
	UNSIGNED_LONG,
	NONE,
	STRUCT_TIMESPEC_PTR,
	UMODE_T,
	TIMER_T,
	CONST_CLOCKID_T,
	UNSIGNED,
	CONST_STRUCT_SIGEVENT_PTR,
	CONST_STRUCT_ITIMERSPEC_PTR,
	STRUCT_SCHED_ATTR___USER_PTR,
	STRUCT_SOCKADDR_PTR,
	SIGSET_T_PTR,
	FD_SET_PTR,
	INT_PTR,
	UID_T_PTR,
	STRUCT_PERF_EVENT_ATTR_PTR,
	__U64,
	CONST_STRUCT_IOVCC_PTR,
	CONST_UNSIGNED_LONG_PTR,
	PID_T,
	INT,
	STRUCT_SYSINFO_PTR,
	ING,
	STRUCT_ITIMERVAL_PTR,
	STACK_T_PTR,
	STRUCT_POLLFD_PTR,
	STRUCT_TIMEZONE_PTR,
	STRUCT_IOCB_PTR,
	KEY_T,
	CONST_STACK_T_PTR,
	CONST_INT_PTR,
	LOFF_T,
	CHAR_PTR,
	STRUCT_FILE_HANDLE_PTR,
	CLOCKID_T,
	CONST_STUCT_TIMESPEC_PTR,
	KEY_SERIAL_T,
	LOFF_T___USER_PTR,
	STRUCT_TIMEVAL_PTR,
	STRUCT_USTAT_PTR,
	CHAR___USER_PTR,
	CONST_STRUCT_SIGACTION_PTR,
	CAP_USER_DATA_T,
	U32_PTR,
	STRUCT_RLIMIT64_PTR,
	CONST_CHAR_PTR,
	STRUCT_SOKADDR_PTR,
	STRUCT_SCHED_PARAM_PTR,
	UNSIGNED_PTR,
	__S32,
	CONST_STRUCT_IOVEC_PTR,
	STRUCT_LINUX_DIRENT64_PTR,
	STRUCT_ROBUST_LIST_HEAD_PTR,
	CONST_VOID_PTR,
	STRUCT_MSQID_DS_PTR,
	CONST_STRUCT_IOVEC___USER_PTR,
	GID_T,
	FCONST_CHAR_PTR,
	SIZE_T_PTR,
	GID_T_PTR,
	STRUCT_STAT_PTR,
	STRUCT_OLD_UTSNAME_PTR,
	CONST_CHAT_PTR,
	STRUCT_TASK_STRUCT_PTR,
	STRUCT_MSGHDR_PTR,
	CONST_CHAR___USER_PTR,
	STRUCT___SYSCTL_ARGS_PTR,
	CAP_USER_HEADER_T,
	TIME_T_PTR,
	STRUCT_TIMEX_PTR,
	CONST_STRUCT_TIMESPEC_PTR,
	SIZE_T,
	UNSIGNED_INT,
	STRUCT_SHMID_DS_PTR,
	STRUCT_MSGBUF_PTR,
	UNION_BPF_ATTR_PTR,
	U64,
	STRUCT_MMSGHDR_PTR,
	STRUCT_GETCPU_CACHE_PTR,
	FD_SETPTR,
	UNSIGNED_LONG_PTR,
	UNION_SEMUN,
	SIGINFO_T_PTR
};





static const t_syscall    g_syscall_table[330] =
{
	{"read", 0, UNSIGNED_INT, CHAR_PTR, SIZE_T, NONE, NONE, NONE},
	{"write", 1, UNSIGNED_INT, CONST_CHAR_PTR, SIZE_T, NONE, NONE, NONE},
	{"open", 2, CONST_CHAR_PTR, INT, INT, NONE, NONE, NONE},
	{"close", 3, UNSIGNED_INT, NONE, NONE, NONE, NONE, NONE},
	{"stat", 4, CONST_CHAR_PTR, STRUCT_STAT_PTR, NONE, NONE, NONE, NONE},
	{"fstat", 5, UNSIGNED_INT, STRUCT_STAT_PTR, NONE, NONE, NONE, NONE},
	{"lstat", 6, FCONST_CHAR_PTR, STRUCT_STAT_PTR, NONE, NONE, NONE, NONE},
	{"poll", 7, STRUCT_POLL_FD_PTR, UNSIGNED_INT, LONG, NONE, NONE, NONE},
	{"lseek", 8, UNSIGNED_INT, OFF_T, UNSIGNED_INT, NONE, NONE, NONE},
	{"mmap", 9, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG},
	{"mprotect", 10, UNSIGNED_LONG, SIZE_T, UNSIGNED_LONG, NONE, NONE, NONE},
	{"munmap", 11, UNSIGNED_LONG, SIZE_T, NONE, NONE, NONE, NONE},
	{"brk", 12, UNSIGNED_LONG, NONE, NONE, NONE, NONE, NONE},
	{"rt_sigaction", 13, INT, CONST_STRUCT_SIGACTION_PTR, STRUCT_SIGACTION_PTR, SIZE_T, NONE, NONE},
	{"rt_sigprocmask", 14, INT, SIGSET_T_PTR, SIGSET_T_PTR, SIZE_T, NONE, NONE},
	{"rt_sigreturn", 15, UNSIGNED_LONG, NONE, NONE, NONE, NONE, NONE},
	{"ioctl", 16, UNSIGNED_INT, UNSIGNED_INT, UNSIGNED_LONG, NONE, NONE, NONE},
	{"pread64", 17, UNSIGNED_LONG, CHAR_PTR, SIZE_T, LOFF_T, NONE, NONE},
	{"pwrite64", 18, UNSIGNED_INT, CONST_CHAR_PTR, SIZE_T, LOFF_T, NONE, NONE},
	{"readv", 19, UNSIGNED_LONG, CONST_STRUCT_IOVEC_PTR, UNSIGNED_LONG, NONE, NONE, NONE},
	{"writev", 20, UNSIGNED_LONG, CONST_STRUCT_IOVEC_PTR, UNSIGNED_LONG, NONE, NONE, NONE},
	{"access", 21, CONST_CHAR_PTR, INT, NONE, NONE, NONE, NONE},
	{"pipe", 22, INT_PTR, NONE, NONE, NONE, NONE, NONE},
	{"select", 23, INT, FD_SET_PTR, FD_SET_PTR, FD_SET_PTR, STRUCT_TIMEVAL_PTR, NONE},
	{"sched_yield", 24, NONE, NONE, NONE, NONE, NONE, NONE},
	{"mremap", 25, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, NONE},
	{"msync", 26, UNSIGNED_LONG, SIZE_T, INT, NONE, NONE, NONE},
	{"mincore", 27, UNSIGNED_LONG, SIZE_T, UNSIGNED_CHAR_PTR, NONE, NONE, NONE},
	{"madvise", 28, UNSIGNED_LONG, SIZE_T, INT, NONE, NONE, NONE},
	{"shmget", 29, KEY_T, SIZE_T, INT, NONE, NONE, NONE},
	{"shmat", 30, INT, CHAR_PTR, INT, NONE, NONE, NONE},
	{"shmctl", 31, INT, INT, STRUCT_SHMID_DS_PTR, NONE, NONE, NONE},
	{"dup", 32, UNSIGNED_INT, NONE, NONE, NONE, NONE, NONE},
	{"dup2", 33, UNSIGNED_INT, UNSIGNED_INT, NONE, NONE, NONE, NONE},
	{"pause", 34, NONE, NONE, NONE, NONE, NONE, NONE},
	{"nanosleep", 35, STRUCT_TIMESPEC_PTR, STRUCT_TIMESPEC_PTR, NONE, NONE, NONE, NONE},
	{"getitimer", 36, INT, STRUCT_ITIMERVAL_PTR, NONE, NONE, NONE, NONE},
	{"alarm", 37, UNSIGNED_INT, NONE, NONE, NONE, NONE, NONE},
	{"setitimer", 38, INT, STRUCT_ITIMERVAL_PTR, STRUCT_ITIMERVAL_PTR, NONE, NONE, NONE},
	{"getpid", 39, NONE, NONE, NONE, NONE, NONE, NONE},
	{"sendfile", 40, INT, INT, OFF_T_PTR, SIZE_T, NONE, NONE},
	{"socket", 41, INT, INT, INT, NONE, NONE, NONE},
	{"connect", 42, INT, STRUCT_SOCKADDR_PTR, INT, NONE, NONE, NONE},
	{"accept", 43, INT, STRUCT_SOCKADDR_PTR, INT_PTR, NONE, NONE, NONE},
	{"sendto", 44, INT, VOID_PTR, SIZE_T, UNSIGNED, STRUCT_SOCKADDR_PTR, INT},
	{"recvfrom", 45, INT, VOID_PTR, SIZE_T, UNSIGNED, STRUCT_SOCKADDR_PTR, INT_PTR},
	{"sendmsg", 46, INT, STRUCT_MSGHDR_PTR, UNSIGNED, NONE, NONE, NONE},
	{"recvmsg", 47, INT, STRUCT_MSGHDR_PTR, UNSIGNED_INT, NONE, NONE, NONE},
	{"shutdown", 48, INT, INT, NONE, NONE, NONE, NONE},
	{"bind", 49, INT, STRUCT_SOKADDR_PTR, INT, NONE, NONE, NONE},
	{"listen", 50, INT, INT, NONE, NONE, NONE, NONE},
	{"getsockname", 51, INT, STRUCT_SOCKADDR_PTR, INT_PTR, NONE, NONE, NONE},
	{"getpeername", 52, INT, STRUCT_SOCKADDR_PTR, INT_PTR, NONE, NONE, NONE},
	{"socketpair", 53, INT, INT, INT, INT_PTR, NONE, NONE},
	{"setsockopt", 54, INT, INT, INT, CHAR_PTR, INT, NONE},
	{"getsockopt", 55, INT, INT, INT, CHAR_PTR, INT_PTR, NONE},
	{"clone", 56, UNSIGNED_LONG, UNSIGNED_LONG, VOID_PTR, VOID_PTR, NONE, NONE},
	{"fork", 57, NONE, NONE, NONE, NONE, NONE, NONE},
	{"vfork", 58, NONE, NONE, NONE, NONE, NONE, NONE},
	{"execve", 59, CONST_CHAR_PTR, CONST_CHAR_PTR, CONST_CHAR_PTR, NONE, NONE, NONE},
	{"exit", 60, INT, NONE, NONE, NONE, NONE, NONE},
	{"wait4", 61, PID_T, INT_PTR, INT, STRUCT_RUSAGE_PTR, NONE, NONE},
	{"kill", 62, PID_T, INT, NONE, NONE, NONE, NONE},
	{"uname", 63, STRUCT_OLD_UTSNAME_PTR, NONE, NONE, NONE, NONE, NONE},
	{"semget", 64, KEY_T, INT, INT, NONE, NONE, NONE},
	{"semop", 65, INT, STRUCT_SEMBUF_PTR, UNSIGNED, NONE, NONE, NONE},
	{"semctl", 66, INT, INT, INT, UNION_SEMUN, NONE, NONE},
	{"shmdt", 67, CHAR_PTR, NONE, NONE, NONE, NONE, NONE},
	{"msgget", 68, KEY_T, INT, NONE, NONE, NONE, NONE},
	{"msgsnd", 69, INT, STRUCT_MSGBUF_PTR, SIZE_T, INT, NONE, NONE},
	{"msgrcv", 70, INT, STRUCT_MSGBUF_PTR, SIZE_T, LONG, INT, NONE},
	{"msgctl", 71, INT, INT, STRUCT_MSQID_DS_PTR, NONE, NONE, NONE},
	{"fcntl", 72, UNSIGNED_INT, UNSIGNED_INT, UNSIGNED_LONG, NONE, NONE, NONE},
	{"flock", 73, UNSIGNED_INT, UNSIGNED_INT, NONE, NONE, NONE, NONE},
	{"fsync", 74, UNSIGNED_INT, NONE, NONE, NONE, NONE, NONE},
	{"fdatasync", 75, UNSIGNED_INT, NONE, NONE, NONE, NONE, NONE},
	{"truncate", 76, CONST_CHAR_PTR, LONG, NONE, NONE, NONE, NONE},
	{"ftruncate", 77, UNSIGNED_INT, UNSIGNED_LONG, NONE, NONE, NONE, NONE},
	{"getdents", 78, UNSIGNED_INT, STRUCT_LINUX_DIRENT_PTR, UNSIGNED_INT, NONE, NONE, NONE},
	{"getcwd", 79, CHAR_PTR, UNSIGNED_LONG, NONE, NONE, NONE, NONE},
	{"chdir", 80, CONST_CHAR_PTR, NONE, NONE, NONE, NONE, NONE},
	{"fchdir", 81, UNSIGNED_INT, NONE, NONE, NONE, NONE, NONE},
	{"rename", 82, CONST_CHAR_PTR, CONST_CHAR_PTR, NONE, NONE, NONE, NONE},
	{"mkdir", 83, CONST_CHAR_PTR, INT, NONE, NONE, NONE, NONE},
	{"rmdir", 84, CONST_CHAR_PTR, NONE, NONE, NONE, NONE, NONE},
	{"creat", 85, CONST_CHAR_PTR, INT, NONE, NONE, NONE, NONE},
	{"link", 86, CONST_CHAR_PTR, CONST_CHAR_PTR, NONE, NONE, NONE, NONE},
	{"unlink", 87, CONST_CHAR_PTR, NONE, NONE, NONE, NONE, NONE},
	{"symlink", 88, CONST_CHAR_PTR, CONST_CHAR_PTR, NONE, NONE, NONE, NONE},
	{"readlink", 89, CONST_CHAR_PTR, CHAR_PTR, INT, NONE, NONE, NONE},
	{"chmod", 90, CONST_CHAR_PTR, MODE_T, NONE, NONE, NONE, NONE},
	{"fchmod", 91, UNSIGNED_INT, MODE_T, NONE, NONE, NONE, NONE},
	{"chown", 92, CONST_CHAR_PTR, UID_T, GID_T, NONE, NONE, NONE},
	{"fchown", 93, UNSIGNED_INT, UID_T, GID_T, NONE, NONE, NONE},
	{"lchown", 94, CONST_CHAR_PTR, UID_T, GID_T, NONE, NONE, NONE},
	{"umask", 95, INT, NONE, NONE, NONE, NONE, NONE},
	{"gettimeofday", 96, STRUCT_TIMEVAL_PTR, STRUCT_TIMEZONE_PTR, NONE, NONE, NONE, NONE},
	{"getrlimit", 97, UNSIGNED_INT, STRUCT_RLIMIT_PTR, NONE, NONE, NONE, NONE},
	{"getrusage", 98, INT, STRUCT_RUSAGE_PTR, NONE, NONE, NONE, NONE},
	{"sysinfo", 99, STRUCT_SYSINFO_PTR, NONE, NONE, NONE, NONE, NONE},
	{"times", 100, STRUCT_SYSINFO_PTR, NONE, NONE, NONE, NONE, NONE},
	{"ptrace", 101, LONG, LONG, UNSIGNED_LONG, UNSIGNED_LONG, NONE, NONE},
	{"getuid", 102, NONE, NONE, NONE, NONE, NONE, NONE},
	{"syslog", 103, INT, CHAR_PTR, INT, NONE, NONE, NONE},
	{"getgid", 104, NONE, NONE, NONE, NONE, NONE, NONE},
	{"setuid", 105, UID_T, NONE, NONE, NONE, NONE, NONE},
	{"setgid", 106, GID_T, NONE, NONE, NONE, NONE, NONE},
	{"geteuid", 107, NONE, NONE, NONE, NONE, NONE, NONE},
	{"getegid", 108, NONE, NONE, NONE, NONE, NONE, NONE},
	{"setpgid", 109, PID_T, PID_T, NONE, NONE, NONE, NONE},
	{"getppid", 110, NONE, NONE, NONE, NONE, NONE, NONE},
	{"getpgrp", 111, NONE, NONE, NONE, NONE, NONE, NONE},
	{"setsid", 112, NONE, NONE, NONE, NONE, NONE, NONE},
	{"setreuid", 113, UID_T, UID_T, NONE, NONE, NONE, NONE},
	{"setregid", 114, GID_T, GID_T, NONE, NONE, NONE, NONE},
	{"getgroups", 115, INT, GID_T_PTR, NONE, NONE, NONE, NONE},
	{"setgroups", 116, INT, GID_T_PTR, NONE, NONE, NONE, NONE},
	{"setresuid", 117, UID_T_PTR, UID_T_PTR, UID_T_PTR, NONE, NONE, NONE},
	{"getresuid", 118, UID_T_PTR, UID_T_PTR, UID_T_PTR, NONE, NONE, NONE},
	{"setresgid", 119, GID_T, GID_T, GID_T, NONE, NONE, NONE},
	{"getresgid", 120, GID_T_PTR, GID_T_PTR, GID_T_PTR, NONE, NONE, NONE},
	{"getpgid", 121, PID_T, NONE, NONE, NONE, NONE, NONE},
	{"setfsuid", 122, UID_T, NONE, NONE, NONE, NONE, NONE},
	{"setfsgid", 123, GID_T, NONE, NONE, NONE, NONE, NONE},
	{"getsid", 124, PID_T, NONE, NONE, NONE, NONE, NONE},
	{"capget", 125, CAP_USER_HEADER_T, CAP_USER_DATA_T, NONE, NONE, NONE, NONE},
	{"capset", 126, CAP_USER_HEADER_T, CONST_CAP_USER_DATA_T, NONE, NONE, NONE, NONE},
	{"rt_sigpending", 127, SIGSET_T_PTR, SIZE_T, NONE, NONE, NONE, NONE},
	{"rt_sigtimedwait", 128, CONST_SIGSET_T_PTR, SIGINFO_T_PTR, CONST_STRUCT_TIMESPEC_PTR, SIZE_T, NONE, NONE},
	{"rt_sigqueueinfo", 129, PID_T, INT, SIGINFO_T_PTR, NONE, NONE, NONE},
	{"rt_sigsuspend", 130, SIGSET_T_PTR, SIZE_T, NONE, NONE, NONE, NONE},
	{"sigaltstack", 131, CONST_STACK_T_PTR, STACK_T_PTR, NONE, NONE, NONE, NONE},
	{"utime", 132, CHAR_PTR, STRUCT_UTIMBUF_PTR, NONE, NONE, NONE, NONE},
	{"mknod", 133, CONST_CHAR_PTR, UMODE_T, UNSIGNED, NONE, NONE, NONE},
	{"uselib", 134, NONE, NONE, NONE, NONE, NONE, NONE},
	{"personality", 135, UNSIGNED_INT, NONE, NONE, NONE, NONE, NONE},
	{"ustat", 136, UNSIGNED, STRUCT_USTAT_PTR, NONE, NONE, NONE, NONE},
	{"statfs", 137, CONST_CHAR_PTR, STRUCT_STATFS_PTR, NONE, NONE, NONE, NONE},
	{"fstatfs", 138, UNSIGNED_INT, STRUCT_STATFS_PTR, NONE, NONE, NONE, NONE},
	{"sysfs", 139, INT, UNSIGNED_LONG, UNSIGNED_LONG, NONE, NONE, NONE},
	{"getpriority", 140, INT, INT, NONE, NONE, NONE, NONE},
	{"setpriority", 141, INT, INT, INT, NONE, NONE, NONE},
	{"sched_setparam", 142, PID_T, STRUCT_SCHED_PARAM_PTR, NONE, NONE, NONE, NONE},
	{"sched_getparam", 143, PID_T, STRUCT_SCHED_PARAM_PTR, NONE, NONE, NONE, NONE},
	{"sched_setscheduler", 144, PID_T, INT, STRUCT_SCHED_PARAM_PTR, NONE, NONE, NONE},
	{"sched_getscheduler", 145, PID_T, NONE, NONE, NONE, NONE, NONE},
	{"sched_get_priority_max", 146, INT, NONE, NONE, NONE, NONE, NONE},
	{"sched_get_priority_min", 147, INT, NONE, NONE, NONE, NONE, NONE},
	{"sched_rr_get_interval", 148, PID_T, STRUCT_TIMESPEC_PTR, NONE, NONE, NONE, NONE},
	{"mlock", 149, UNSIGNED_LONG, SIZE_T, NONE, NONE, NONE, NONE},
	{"munlock", 150, UNSIGNED_LONG, SIZE_T, NONE, NONE, NONE, NONE},
	{"mlockall", 151, INT, NONE, NONE, NONE, NONE, NONE},
	{"munlockall", 152, NONE, NONE, NONE, NONE, NONE, NONE},
	{"vhangup", 153, NONE, NONE, NONE, NONE, NONE, NONE},
	{"modify_ldt", 154, INT, VOID_PTR, UNSIGNED_LONG, NONE, NONE, NONE},
	{"pivot_root", 155, CONST_CHAR_PTR, CONST_CHAR_PTR, NONE, NONE, NONE, NONE},
	{"_sysctl", 156, STRUCT___SYSCTL_ARGS_PTR, NONE, NONE, NONE, NONE, NONE},
	{"prctl", 157, INT, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, NONE, UNSIGNED_LONG},
	{"arch_prctl", 158, STRUCT_TASK_STRUCT_PTR, INT, UNSIGNED_LONG_PTR, NONE, NONE, NONE},
	{"adjtimex", 159, STRUCT_TIMEX_PTR, NONE, NONE, NONE, NONE, NONE},
	{"setrlimit", 160, UNSIGNED_INT, STRUCT_RLIMIT_PTR, NONE, NONE, NONE, NONE},
	{"chroot", 161, CONST_CHAR_PTR, NONE, NONE, NONE, NONE, NONE},
	{"sync", 162, NONE, NONE, NONE, NONE, NONE, NONE},
	{"acct", 163, CONST_CHAR_PTR, NONE, NONE, NONE, NONE, NONE},
	{"settimeofday", 164, STRUCT_TIMEVAL_PTR, STRUCT_TIMEZONE_PTR, NONE, NONE, NONE, NONE},
	{"mount", 165, CHAR_PTR, CHAR_PTR, CHAR_PTR, UNSIGNED_LONG, VOID_PTR, NONE},
	{"umount2", 166, CONST_CHAR_PTR, INT, NONE, NONE, NONE, NONE},
	{"swapon", 167, CONST_CHAR_PTR, INT, NONE, NONE, NONE, NONE},
	{"swapoff", 168, CONST_CHAR_PTR, NONE, NONE, NONE, NONE, NONE},
	{"reboot", 169, INT, INT, UNSIGNED_INT, VOID_PTR, NONE, NONE},
	{"sethostname", 170, CHAR_PTR, INT, NONE, NONE, NONE, NONE},
	{"setdomainname", 171, CHAR_PTR, INT, NONE, NONE, NONE, NONE},
	{"iopl", 172, UNSIGNED_INT, STRUCT_PT_REGS_PTR, NONE, NONE, NONE, NONE},
	{"ioperm", 173, UNSIGNED_LONG, UNSIGNED_LONG, INT, NONE, NONE, NONE},
	{"create_module", 174, NONE, NONE, NONE, NONE, NONE, NONE},
	{"init_module", 175, VOID_PTR, UNSIGNED_LONG, CONST_CHAR_PTR, NONE, NONE, NONE},
	{"delete_module", 176, CONST_CHAT_PTR, UNSIGNED_INT, NONE, NONE, NONE, NONE},
	{"get_kernel_syms", 177, NONE, NONE, NONE, NONE, NONE, NONE},
	{"query_module", 178, NONE, NONE, NONE, NONE, NONE, NONE},
	{"quotactl", 179, UNSIGNED_INT, CONST_CHAR_PTR, QID_T, VOID_PTR, NONE, NONE},
	{"nfsservctl", 180, NONE, NONE, NONE, NONE, NONE, NONE},
	{"getpmsg", 181, NONE, NONE, NONE, NONE, NONE, NONE},
	{"putpmsg", 182, NONE, NONE, NONE, NONE, NONE, NONE},
	{"afs_syscall", 183, NONE, NONE, NONE, NONE, NONE, NONE},
	{"tuxcall", 184, NONE, NONE, NONE, NONE, NONE, NONE},
	{"security", 185, NONE, NONE, NONE, NONE, NONE, NONE},
	{"gettid", 186, NONE, NONE, NONE, NONE, NONE, NONE},
	{"readahead", 187, INT, LOFF_T, SIZE_T, NONE, NONE, NONE},
	{"setxattr", 188, CONST_CHAR_PTR, CONST_CHAR_PTR, CONST_VOID_PTR, SIZE_T, INT, NONE},
	{"lsetxattr", 189, CONST_CHAR_PTR, CONST_CHAR_PTR, CONST_VOID_PTR, SIZE_T, INT, NONE},
	{"fsetxattr", 190, INT, CONST_CHAR_PTR, CONST_VOID_PTR, SIZE_T, INT, NONE},
	{"getxattr", 191, CONST_CHAR_PTR, CONST_CHAR_PTR, VOID_PTR, SIZE_T, NONE, NONE},
	{"lgetxattr", 192, CONST_CHAR_PTR, CONST_CHAR_PTR, VOID_PTR, SIZE_T, NONE, NONE},
	{"fgetxattr", 193, INT, CONST_HAR_PTR, VOID_PTR, SIZE_T, NONE, NONE},
	{"listxattr", 194, CONST_CHAR_PTR, CHAR_PTR, SIZE_T, NONE, NONE, NONE},
	{"llistxattr", 195, CONST_CHAR_PTR, CHAR_PTR, SIZE_T, NONE, NONE, NONE},
	{"flistxattr", 196, INT, CHAR_PTR, SIZE_T, NONE, NONE, NONE},
	{"removexattr", 197, CONST_CHAR_PTR, CONST_CHAR_PTR, NONE, NONE, NONE, NONE},
	{"lremovexattr", 198, CONST_CHAR_PTR, CONST_CHAR_PTR, NONE, NONE, NONE, NONE},
	{"fremovexattr", 199, INT, CONST_CHAR_PTR, NONE, NONE, NONE, NONE},
	{"tkill", 200, PID_T, ING, NONE, NONE, NONE, NONE},
	{"time", 201, TIME_T_PTR, NONE, NONE, NONE, NONE, NONE},
	{"futex", 202, U32_PTR, INT, U32, STRUCT_TIMESPEC_PTR, U32_PTR, U32},
	{"sched_setaffinity", 203, PID_T, UNSIGNED_INT, UNSIGNED_LONG_PTR, NONE, NONE, NONE},
	{"sched_getaffinity", 204, PID_T, UNSIGNED_INT, UNSIGNED_LONG_PTR, NONE, NONE, NONE},
	{"set_thread_area", 205, NONE, NONE, NONE, NONE, NONE, NONE},
	{"io_setup", 206, UNSIGNED, AIO_CONTEXT_T_PTR, NONE, NONE, NONE, NONE},
	{"io_destroy", 207, AIO_CONTEXT_T, NONE, NONE, NONE, NONE, NONE},
	{"io_getevents", 208, AIO_CONTEXT_T, LONG, LONG, STRUCT_IO_EVENT_PTR, NONE, NONE},
	{"io_submit", 209, AIO_CONTEXT_T, LONG, STRUCT_IOCB_PTR, NONE, NONE, NONE},
	{"io_cancel", 210, AIO_CONTEXT_T, STRUCT_IOCB_PTR, STRUCT_IO_EVENT_PTR, NONE, NONE, NONE},
	{"get_thread_area", 211, NONE, NONE, NONE, NONE, NONE, NONE},
	{"lookup_dcookie", 212, U64, LONG, LONG, NONE, NONE, NONE},
	{"epoll_create", 213, INT, NONE, NONE, NONE, NONE, NONE},
	{"epoll_ctl_old", 214, NONE, NONE, NONE, NONE, NONE, NONE},
	{"epoll_wait_old", 215, NONE, NONE, NONE, NONE, NONE, NONE},
	{"remap_file_pages", 216, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, NONE},
	{"getdents64", 217, UNSIGNED_INT, STRUCT_LINUX_DIRENT64_PTR, UNSIGNED_INT, NONE, NONE, NONE},
	{"set_tid_address", 218, INT_PTR, NONE, NONE, NONE, NONE, NONE},
	{"restart_syscall", 219, NONE, NONE, NONE, NONE, NONE, NONE},
	{"semtimedop", 220, INT, STRUCT_SEMBUF_PTR, UNSIGNED, CONST_STRUCT_TIMESPEC_PTR, NONE, NONE},
	{"fadvise64", 221, INT, LOFF_T, SIZE_T, INT, NONE, NONE},
	{"timer_create", 222, CONST_CLOCKID_T, STRUCT_SIGEVENT_PTR, TIMER_T_PTR, NONE, NONE, NONE},
	{"timer_settime", 223, TIMER_T, INT, CONST_STRUCT_ITIMERSPEC_PTR, STRUCT_ITIMERSPEC_PTR, NONE, NONE},
	{"timer_gettime", 224, TIMER_T, STRUCT_ITIMERSPEC_PTR, NONE, NONE, NONE, NONE},
	{"timer_getoverrun", 225, TIMER_T, NONE, NONE, NONE, NONE, NONE},
	{"timer_delete", 226, TIMER_T, NONE, NONE, NONE, NONE, NONE},
	{"clock_settime", 227, CONST_CLOCKID_T, CONST_STRUCT_TIMESPEC_PTR, NONE, NONE, NONE, NONE},
	{"clock_gettime", 228, CONST_CLOCKID_T, STRUCT_TIMESPEC_PTR, NONE, NONE, NONE, NONE},
	{"clock_getres", 229, CONST_CLOCKID_T, STRUCT_TIMESPEC_PTR, NONE, NONE, NONE, NONE},
	{"clock_nanosleep", 230, CONST_CLOCKID_T, INT, CONST_STRUCT_TIMESPEC_PTR, STRUCT_TIMESPEC_PTR, NONE, NONE},
	{"exit_group", 231, INT, NONE, NONE, NONE, NONE, NONE},
	{"epoll_wait", 232, INT, STRUCT_EPOLL_EVENT_PTR, INT, INT, NONE, NONE},
	{"epoll_ctl", 233, INT, INT, INT, STRUCT_EPOLL_EVENT_PTR, NONE, NONE},
	{"tgkill", 234, PID_T, PID_T, INT, NONE, NONE, NONE},
	{"utimes", 235, CHAR_PTR, STRUCT_TIMEVAL_PTR, NONE, NONE, NONE, NONE},
	{"vserver", 236, NONE, NONE, NONE, NONE, NONE, NONE},
	{"mbind", 237, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG_PTR, UNSIGNED_LONG, UNSIGNED},
	{"set_mempolicy", 238, INT, UNSIGNED_LONG_PTR, UNSIGNED_LONG, NONE, NONE, NONE},
	{"get_mempolicy", 239, INT_PTR, UNSIGNED_LONG_PTR, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, NONE},
	{"mq_open", 240, CONST_CHAR_PTR, INT, MODE_T, STRUCT_MQ_ATTR_PTR, NONE, NONE},
	{"mq_unlink", 241, CONST_CHAR_PTR, NONE, NONE, NONE, NONE, NONE},
	{"mq_timedsend", 242, MQD_T, CONST_CHAR_PTR, SIZE_T, UNSIGNED_INT, CONST_STUCT_TIMESPEC_PTR, NONE},
	{"mq_timedreceive", 243, MQD_T, CHAR_PTR, SIZE_T, UNSIGNED_INT_PTR, CONST_STRUCT_TIMESPEC_PTR, NONE},
	{"mq_notify", 244, MQD_T, CONST_STRUCT_SIGEVENT_PTR, NONE, NONE, NONE, NONE},
	{"mq_getsetattr", 245, MQD_T, CONST_STRUCT_MQ_ATTR_PTR, STRUCT_MQ_ATTR_PTR, NONE, NONE, NONE},
	{"kexec_load", 246, UNSIGNED_LONG, UNSIGNED_LONG, STRUCT_KEXEC_SEGMENT_PTR, UNSIGNED_LONG, NONE, NONE},
	{"waitid", 247, INT, PID_T, STRUCT_SIGINFO_PTR, INT, STRUCT_RUSAGE_PTR, NONE},
	{"add_key", 248, CONST_CHAR_PTR, CONST_CHAR_PTR, CONST_VOID_PTR, SIZE_T, NONE, NONE},
	{"request_key", 249, CONST_CHAR_PTR, CONST_CHAR_PTR, CONST_CHAR_PTR, KEY_SERIAL_T, NONE, NONE},
	{"keyctl", 250, INT, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, NONE},
	{"ioprio_set", 251, INT, INT, INT, NONE, NONE, NONE},
	{"ioprio_get", 252, INT, INT, NONE, NONE, NONE, NONE},
	{"inotify_init", 253, NONE, NONE, NONE, NONE, NONE, NONE},
	{"inotify_add_watch", 254, INT, CONST_CHAR_PTR, U32, NONE, NONE, NONE},
	{"inotify_rm_watch", 255, INT, __S32, NONE, NONE, NONE, NONE},
	{"migrate_pages", 256, PID_T, UNSIGNED_LONG, CONST_UNSIGNED_LONG_PTR, CONST_UNSIGNED_LONG_PTR, NONE, NONE},
	{"openat", 257, INT, CONST_CHAR_PTR, INT, INT, NONE, NONE},
	{"mkdirat", 258, INT, CONST_CHAR_PTR, INT, NONE, NONE, NONE},
	{"mknodat", 259, INT, CONST_CHAR_PTR, INT, UNSIGNED, NONE, NONE},
	{"fchownat", 260, INT, CONST_CHAR_PTR, UID_T, GID_T, INT, NONE},
	{"futimesat", 261, INT, CONST_CHAR_PTR, STRUCT_TIMEVAL_PTR, NONE, NONE, NONE},
	{"newfstatat", 262, INT, CONST_CHAR_PTR, STRUCT_STAT_PTR, INT, NONE, NONE},
	{"unlinkat", 263, INT, CONST_CHAR_PTR, INT, NONE, NONE, NONE},
	{"renameat", 264, INT, CONST_CHAR_PTR, INT, CONST_CHAR_PTR, NONE, NONE},
	{"linkat", 265, INT, CONST_CHAR_PTR, INT, CONST_CHAR_PTR, INT, NONE},
	{"symlinkat", 266, CONST_CHAR_PTR, INT, CONST_CHAR_PTR, NONE, NONE, NONE},
	{"readlinkat", 267, INT, CONST_CHAR_PTR, CHAR_PTR, INT, NONE, NONE},
	{"fchmodat", 268, INT, CONST_CHAR_PTR, MODE_T, NONE, NONE, NONE},
	{"faccessat", 269, INT, CONST_CHAR_PTR, INT, NONE, NONE, NONE},
	{"pselect6", 270, INT, FD_SET_PTR, FD_SET_PTR, FD_SET_PTR, STRUCT_TIMESPEC_PTR, VOID_PTR},
	{"ppoll", 271, STRUCT_POLLFD_PTR, UNSIGNED_INT, STRUCT_TIMESPEC_PTR, CONST_SIGSET_T_PTR, SIZE_T, NONE},
	{"unshare", 272, UNSIGNED_LONG, NONE, NONE, NONE, NONE, NONE},
	{"set_robust_list", 273, STRUCT_ROBUST_LIST_HEAD_PTR, SIZE_T, NONE, NONE, NONE, NONE},
	{"get_robust_list", 274, INT, STRUCT_ROBUST_LIST_HEAD_PTR, SIZE_T_PTR, NONE, NONE, NONE},
	{"splice", 275, INT, LOFF_T_PTR, INT, LOFF_T_PTR, SIZE_T, UNSIGNED_INT},
	{"tee", 276, INT, INT, SIZE_T, UNSIGNED_INT, NONE, NONE},
	{"sync_file_range", 277, LONG, LOFF_T, LOFF_T, LONG, NONE, NONE},
	{"vmsplice", 278, INT, CONST_STRUCT_IOVEC_PTR, UNSIGNED_LONG, UNSIGNED_INT, NONE, NONE},
	{"move_pages", 279, PID_T, UNSIGNED_LONG, CONST_VOID_PTR, CONST_INT_PTR, INT_PTR, INT},
	{"utimensat", 280, INT, CONST_CHAR_PTR, STRUCT_TIMESPEC_PTR, INT, NONE, NONE},
	{"epoll_pwait", 281, INT, STRUCT_EPOLL_EVENT_PTR, INT, INT, CONST_SIGSET_T_PTR, SIZE_T},
	{"signalfd", 282, INT, SIGSET_T_PTR, SIZE_T, NONE, NONE, NONE},
	{"timerfd_create", 283, INT, INT, NONE, NONE, NONE, NONE},
	{"eventfd", 284, UNSIGNED_INT, NONE, NONE, NONE, NONE, NONE},
	{"fallocate", 285, LONG, LONG, LOFF_T, LOFF_T, NONE, NONE},
	{"timerfd_settime", 286, INT, INT, CONST_STRUCT_ITIMERSPEC_PTR, STRUCT_ITIMERSPEC_PTR, NONE, NONE},
	{"timerfd_gettime", 287, INT, STRUCT_ITIMERSPEC_PTR, NONE, NONE, NONE, NONE},
	{"accept4", 288, INT, STRUCT_SOCKADDR_PTR, INT_PTR, INT, NONE, NONE},
	{"signalfd4", 289, INT, SIGSET_T_PTR, SIZE_T, INT, NONE, NONE},
	{"eventfd2", 290, UNSIGNED_INT, INT, NONE, NONE, NONE, NONE},
	{"epoll_create1", 291, INT, NONE, NONE, NONE, NONE, NONE},
	{"dup3", 292, UNSIGNED_INT, UNSIGNED_INT, INT, NONE, NONE, NONE},
	{"pipe2", 293, INT_PTR, INT, NONE, NONE, NONE, NONE},
	{"inotify_init1", 294, INT, NONE, NONE, NONE, NONE, NONE},
	{"preadv", 295, UNSIGNED_LONG, CONST_STRUCT_IOVEC_PTR, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, NONE},
	{"pwritev", 296, UNSIGNED_LONG, CONST_STRUCT_IOVEC_PTR, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, NONE},
	{"rt_tgsigqueueinfo", 297, PID_T, PID_T, INT, SIGINFO_T_PTR, NONE, NONE},
	{"perf_event_open", 298, STRUCT_PERF_EVENT_ATTR_PTR, PID_T, INT, INT, UNSIGNED_LONG, NONE},
	{"recvmmsg", 299, INT, STRUCT_MSGHDR_PTR, UNSIGNED_INT, UNSIGNED_INT, STRUCT_TIMESPEC_PTR, NONE},
	{"fanotify_init", 300, UNSIGNED_INT, UNSIGNED_INT, NONE, NONE, NONE, NONE},
	{"fanotify_mark", 301, LONG, LONG, __U64, LONG, LONG, NONE},
	{"prlimit64", 302, PID_T, UNSIGNED_INT, CONST_STRUCT_RLIMIT64_PTR, STRUCT_RLIMIT64_PTR, NONE, NONE},
	{"name_to_handle_at", 303, INT, CONST_CHAR_PTR, STRUCT_FILE_HANDLE_PTR, INT_PTR, INT, NONE},
	{"open_by_handle_at", 304, INT, CONST_CHAR_PTR, STRUCT_FILE_HANDLE_PTR, INT_PTR, INT, NONE},
	{"clock_adjtime", 305, CLOCKID_T, STRUCT_TIMEX_PTR, NONE, NONE, NONE, NONE},
	{"syncfs", 306, INT, NONE, NONE, NONE, NONE, NONE},
	{"sendmmsg", 307, INT, STRUCT_MMSGHDR_PTR, UNSIGNED_INT, UNSIGNED_INT, NONE, NONE},
	{"setns", 308, INT, INT, NONE, NONE, NONE, NONE},
	{"getcpu", 309, UNSIGNED_PTR, UNSIGNED_PTR, STRUCT_GETCPU_CACHE_PTR, NONE, NONE, NONE},
	{"process_vm_readv", 310, PID_T, CONST_STRUCT_IOVEC_PTR, UNSIGNED_LONG, CONST_STRUCT_IOVEC_PTR, UNSIGNED_LONG, UNSIGNED_LONG},
	{"process_vm_writev", 311, PID_T, CONST_STRUCT_IOVEC_PTR, UNSIGNED_LONG, CONST_STRUCT_IOVCC_PTR, UNSIGNED_LONG, UNSIGNED_LONG},
	{"kcmp", 312, PID_T, PID_T, INT, UNSIGNED_LONG, UNSIGNED_LONG, NONE},
	{"finit_module", 313, INT, CONST_CHAR___USER_PTR, INT, NONE, NONE, NONE},
	{"sched_setattr", 314, PID_T, STRUCT_SCHED_ATTR___USER_PTR, UNSIGNED_INT, NONE, NONE, NONE},
	{"sched_getattr", 315, PID_T, STRUCT_SCHED_ATTR___USER_PTR, UNSIGNED_INT, UNSIGNED_INT, NONE, NONE},
	{"renameat2", 316, INT, CONST_CHAR___USER_PTR, INT, CONST_CHAR___USER_PTR, UNSIGNED_INT, NONE},
	{"seccomp", 317, UNSIGNED_INT, UNSIGNED_INT, CONST_CHAR___USER_PTR, NONE, NONE, NONE},
	{"getrandom", 318, CHAR___USER_PTR, SIZE_T, UNSIGNED_INT, NONE, NONE, NONE},
	{"memfd_create", 319, CONST_CHAR___USER_PTR, UNSIGNED_INT, NONE, NONE, NONE, NONE},
	{"kexec_file_load", 320, INT, INT, UNSIGNED_LONG, CONST_CHAR___USER_PTR, UNSIGNED_LONG, NONE},
	{"bpf", 321, INT, UNION_BPF_ATTR_PTR, UNSIGNED_INT, NONE, NONE, NONE},
	{"stub_execveat", 322, INT, CONST_CHAR___USER_PTR, CONST_CHAR___USER_PTR, CONST_CHAR___USER_PTR, INT, NONE},
	{"userfaultfd", 323, INT, NONE, NONE, NONE, NONE, NONE},
	{"membarrier", 324, INT, INT, NONE, NONE, NONE, NONE},
	{"mlock2", 325, UNSIGNED_LONG, SIZE_T, INT, NONE, NONE, NONE},
	{"copy_file_range", 326, INT, LOFF_T___USER_PTR, INT, LOFF_T___USER_PTR, SIZE_T, UNSIGNED_INT},
	{"preadv2", 327, UNSIGNED_LONG, CONST_STRUCT_IOVEC___USER_PTR, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, INT},
	{"pwritev2", 328, UNSIGNED_LONG, CONST_STRUCT_IOVEC___USER_PTR, UNSIGNED_LONG, UNSIGNED_LONG, UNSIGNED_LONG, INT}
};

