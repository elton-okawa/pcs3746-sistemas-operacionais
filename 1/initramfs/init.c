#include <stdio.h>
#include <stdlib.h>

#include "save_recover.h"
int main(){
	long random_n;
	int pid = fork();
	while(1) {
		if (pid != 0) {
			random_n = (long) rand();
			printf("Saving random number: %ld\n", save(random_n));
		} else {
			printf("Recovered random number: %ld\n", recover());
		}
	}
	return 0;
}
