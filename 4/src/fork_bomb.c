#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "kernel_malloc.h"

// int array[10000000]; //funciona
// int array[5050000]; //funciona
// int array[6050000]; //funciona 
// int array[6150000];  // funciona
// int array[6200000];
// int array3[15000000];
int main() {
  // (double *)malloc(sizeof(double) * 16000000);
  // kernel_malloc(50000000L);
  printf("while\n");
  while(1) {
    fork();
  }

  return 0;
}
