#include <stdio.h>
#include <stdlib.h>

#define BEGIN int main(int ARGC, const char *ARGV[])
BEGIN {
	float deg;
	float rad;

	if (ARGC < 2) {
		printf("No argument.\n");
		exit(1);
	}

	deg = atof (ARGV[1]);
	rad = deg * 3.1415 / 180;

	printf("%f\n", sin(rad));

	exit(0);
}
