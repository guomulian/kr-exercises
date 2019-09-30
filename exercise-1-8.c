#include <stdio.h>

/* count blanks, tabs, and newlines in input */

int main()
{
    int c, nw;

    nw = 0;

    // ctrl-d for EOF code
    while ((c = getchar()) != EOF)
        if (c == '\n' || c == '\t' || c == ' ')
            ++nw;
    printf("%d\n", nw);
}