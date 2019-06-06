#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "forkexecve.h"
int main() {
	// printf("[USER][inic.c] pid before forkexecve: %ld\n", getpid());
	long pid = forkexecve("execve", NULL, NULL);
	printf("[USER][init.c] pid from forkexecve: %ld\n", pid);
	printf("[USER][init.c] pid: %ld\n", getpid());
	while(1) {
		printf("init.c\n");
		sleep(1);
	} 
	return 0;
}
