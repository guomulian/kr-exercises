#include <stdio.h>

/* count lines, words, and characters in input */

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            printf("\n");
        else
            putchar(c);
    }
}