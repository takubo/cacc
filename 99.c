#include <stdio.h>
#include <stdlib.h>

#define BEGIN int main(int argc, const char *argv[])
BEGIN {
	int (i);
	int (j);

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%4d", i * j);
		}
		printf("\n");
	}

	exit(0);
}
