#include <stdio.h>

/* copy input to output, replacing each tab by \t, each backspace by \b, and each backslash by \\ */

int main()
{
    int c;

    while((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            // ctrl-h for backspace control character
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }

    putchar('\n');
    return 0;
}