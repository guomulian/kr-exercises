#include <stdio.h>

/* create a histogram of the lengths of words in the input */

#define MAXLEN 15

int main()
{
    int c, l, i;
    int lengths[MAXLEN]; // bin size will be one for convenience

    for (l = 0; l < MAXLEN; ++l)
        lengths[l] = 0;

    l = 0; // reuse l

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            ++lengths[l];
            l = 0;
        }
        else
            ++l;
    }

    printf("\nHorizontal Histogram\n\n");
    for (l = 0; l < MAXLEN; ++l) {
        printf("%2d ", l);
        for (i = 0; i < lengths[l]; ++i)
            printf("#");
        printf("\n");
    }
}