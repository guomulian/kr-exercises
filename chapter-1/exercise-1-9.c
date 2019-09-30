#include <stdio.h>

/* copy input to output, replacing each string of one or more blanks by a single blank */

int main()
{
    int c;
    int blank;

    blank = 0;

    while ((c = getchar()) != EOF) {
        if (blank && c == ' ')
            ;
        else if (c == ' ') {
            blank = 1;
            putchar(c);
        }
        else
            putchar(c);
    }
}