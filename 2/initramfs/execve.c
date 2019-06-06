#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[], char *envp[]){
  printf("[USER][execve.c] pid: %ld\n", getpid());
  while(1) {
    printf("execve.c\n");
    sleep(1);
  }
}