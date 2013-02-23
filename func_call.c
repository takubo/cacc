#include <stdio.h>
#include <stdlib.h>


#define function float
#define n float n
function couple(n)
#undef n
{
    return n * 2;
}
#undef function


#define function long
#define add(a, b) add(int a, int b)
function add(a, b)
#undef add
{
    return a + b;
}
#undef function


#define function const char *
function self(str)
#define XXXXX \
{
    const char *str;
{
    return str;
}
//}
#undef function


#define BEGIN int main(int ARGC, const char *ARGV[])
BEGIN {
    printf("%f\n", couple(8.0));
    printf("%ld\n", add(2, 3));
    printf("%s\n", self("EEEE"));
    exit(0);
}
