#include <stdio.h>
#define MAXLINE 1000        /* maximum input line size */
#define MINCHAR 0           /* minimum characters to print */

int fetchline(char line[], int maxline); /* function name changed from textbook due to conflict, see https://stackoverflow.com/questions/8763052/why-do-i-get-a-conflicting-types-for-getline-error-when-compiling-the-longest */

/* print input lines longer than MINCHAR */
int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = fetchline(line, MAXLINE)) > 0) {
        if (len > MINCHAR)
            printf("%s", line);
    }

    return 0;
}

/* fetchline: read a line into s, return length */
int fetchline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1; ++i) {
        c=getchar();

        if (c == EOF) {
            // printf("EOF occured.\n");
            break;
        }

        else if (c == '\n') {
            s[i] = c;
            ++i;
            // printf("Line break occured.\n");
            break;
        }

        s[i] = c;
    }

    s[i] = '\0';
    return i;
}