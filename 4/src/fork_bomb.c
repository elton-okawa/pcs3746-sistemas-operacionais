#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "kernel_malloc.h"

int array[5000000];

int main() {
  // (double *)malloc(sizeof(double) * 16000000);
  // kernel_malloc(50000000L);
  
  while(1) {
    fork();
  }

  return 0;
}
