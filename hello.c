#include <stdio.h>
#include <stdlib.h>

#define BEGIN int main(int argc, const char *argv[])
BEGIN {
	char *str;
	str = "C";
#define XXXX /*
	str = "AWK"
	/ */
	printf("Hello, %s.\n", str);
	exit(0);
}
