#include <stdio.h>
#define MAXLINE 1000        /* maximum input line size */

int fetchline(char line[], int maxline); /* function name changed from textbook due to conflict, see https://stackoverflow.com/questions/8763052/why-do-i-get-a-conflicting-types-for-getline-error-when-compiling-the-longest */
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;                /* current line length */
    int max;                /* max length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    
    while ((len = fetchline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)    /* there was a line */
        printf("%s\n", longest);
    
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