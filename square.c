#include <stdio.h>
#include <stdlib.h>

#define BEGIN int main(int ARGC, const char *ARGV[])
BEGIN {
	int (n);

	if (ARGC < 2) {
		printf("No argument.\n");
		exit(1);
	}

	n = atol (ARGV[1]);

	printf("%d\n", n * n);

	exit(0);
}
