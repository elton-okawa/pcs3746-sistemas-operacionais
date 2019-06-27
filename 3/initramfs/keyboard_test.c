#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mount.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>

int main()
{
	printf("\nKeyboard Test\n\n");

	int fd = open("/dev/pressed_key", O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return -1;
	}

	char item;

	while (1) {
		int size = read(fd, &item, 1);
		if (!size) {
			printf("EOF\n");
			return 0;
		}
		if (size < 0) {
			perror("read");
			return -1;
		}
		if (item == '1') {
			printf("Keyboard pressed: %c\n", item);
		} else {
			printf("Keyboard not pressed: %c\n", '0');
		}

		struct timespec tim, tim2;
   	tim.tv_sec = 0;
   	tim.tv_nsec = 35000000L;
		nanosleep(&tim , &tim2);
	}
	return 0;
}
