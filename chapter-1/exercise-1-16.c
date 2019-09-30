#include <stdio.h>
#define MAXLINE 5        /* maximum input line size */

int fetchline(char line[], int maxline); /* function name changed from textbook due to conflict, see https://stackoverflow.com/questions/8763052/why-do-i-get-a-conflicting-types-for-getline-error-when-compiling-the-longest */
void copy(char to[], char from[]);

/* print the length of the longest input line, and as much of line as possible */
int main()
{
    int len;                /* current line length */
    int max;                /* max length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */
    int c;

    max = 0;
    
    while ((len = fetchline(line, MAXLINE)) > 0) {
        /* if the line was longer than fetchline could handle (i.e., longer than MAXLINE) */
        if (line[len-1] != '\n') {
            /* continue reading from the input stream until EOF or \n */
            while ((c = getchar()) != EOF && c != '\n')
                ++len;
            if (c == '\n')
                ++len;
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)    /* there was a line */
        printf("The longest length was %i and the portion of the string we were able to store was %s.\n", max, longest);
    
    return 0;
}

/* fetchline: read a line into s, return length */
int fetchline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}