#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "kernel_malloc.h"

// int array3[15000000];
int main() {
  while(1) {
    // kernel_malloc(50000000L);
    // fork();
    long size = 180000; // 703 kB
    // long size = 4096000L; // 16000 kB
    long *arr = (long *)malloc(sizeof(long) * size);
    for (long i = 0; i < size; i += 10) {
      arr[i] = i;
    }

    sleep(1);
  }

  return 0;
}
