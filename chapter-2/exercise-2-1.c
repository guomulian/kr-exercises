#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("PRINTED FROM <limits.h>:\n\n");
    printf("char min\t\t%i\n", CHAR_MIN);
    printf("char max\t\t%i\n\n", CHAR_MAX);

    printf("short min\t\t%i\n", SHRT_MIN);
    printf("short max\t\t%i\n\n", SHRT_MAX);

    printf("int min\t\t\t%i\n", INT_MIN);
    printf("int max\t\t\t%i\n\n", INT_MAX);

    printf("long min\t\t%ld\n", LONG_MIN);
    printf("long max\t\t%ld\n\n", LONG_MAX);

    printf("long min\t\t%ld\n", LONG_MIN);
    printf("long max\t\t%ld\n\n", LONG_MAX);

    printf("unsigned char max\t%i\n", UCHAR_MAX);
    printf("unsigned int max\t%u\n", UINT_MAX);
    printf("unsigned long max\t%lu\n", ULONG_MAX);
    printf("unsigned short max\t%u\n\n", USHRT_MAX);

    printf("MANUALLY COMPUTED LIMITS:\n\n");

    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    unsigned long ul;

    uc = ~0;
    uc >>= 1;

    printf("char min\t\t%i\n", -uc-1);
    printf("char max\t\t%i\n\n", uc);

    us = ~0;
    us >>= 1;

    printf("short min\t\t%i\n", -us-1);
    printf("short max\t\t%i\n\n", us);

    ui = ~0;
    ui >>= 1;

    printf("int min\t\t\t%i\n", -ui-1);
    printf("int max\t\t\t%i\n\n", ui);

    ul = ~0;
    ul >>= 1;

    printf("long min\t\t%ld\n", -ul-1);
    printf("long max\t\t%ld\n\n", ul);

    printf("unsigned char max\t%i\n", uc*2+1);
    printf("unsigned int max\t%u\n", us*2+1);
    printf("unsigned long max\t%u\n", ui*2+1);
    printf("unsigned short max\t%lu\n\n", ul*2+1);

    return 0;
}