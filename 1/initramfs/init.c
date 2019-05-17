#include <stdio.h>
#include <stdlib.h>

#include "save_recover.h"
int main(){
	int random_n;
	int pid = fork();
	while(1) {
		if (pid != 0) {
			random_n = rand();
			printf("Saving random number: %i\n", save(random_n));
		} else {
			printf("Recovered random number: %i\n", recover());
		}
	}
	return 0;
}
