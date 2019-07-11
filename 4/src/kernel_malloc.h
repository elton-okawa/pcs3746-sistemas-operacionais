#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>

#define __NR_kernel_malloc 407

long kernel_malloc(long size)
{
  return syscall(__NR_kernel_malloc, size);
}
