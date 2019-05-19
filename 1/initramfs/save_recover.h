#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>

#define __NR_save 404
#define __NR_recover 405

long save(long number) {
	return syscall(__NR_save, number);
}

long recover(void) {
	return syscall(__NR_recover);
}
