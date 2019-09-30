#include <stdio.h>

/* create a histogram of the frequencies of the characters in the input */

#define MAXCHARS 128 // include non-printable characters too

int main()
{
    int c, ch, i;
    int freq[MAXCHARS]; // bin size will be one for convenience

    for (ch = 0; ch < MAXCHARS; ++ch)
        freq[ch] = 0;

    ch = 0; // reuse ch

    while ((c = getchar()) != EOF) {
        ++freq[c];
    }

    printf("\nHorizontal Histogram\n\n");
    for (ch = 0; ch < MAXCHARS; ++ch) {
        printf("%3d ", ch);
        for (i = 0; i < freq[ch]; ++i)
            printf("#");
        printf("\n");
    }
}