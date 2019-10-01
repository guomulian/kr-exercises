#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int fetchline(char line[], int maxline);
void removetrailing(char line[], int len);
int isblankchar(char s);
int isblankline(char line[], int len);

/* remove trailing blanks and tabs, delete entirely blank lines */
int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */
    
    while ((len = fetchline(line, MAXLINE)) > 0) {
        if (!isblankline(line, len)) {
            removetrailing(line, len);
            printf("%s", line);
        }
    }
    
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

int isblankchar(char s) {
    if (s != '\t' && s != ' ' && s != '\n')
        return 0;
    return 1;
}

/* isblankline: returns 1 if line consists only of blank characters, 0 otherwise */
int isblankline(char s[], int len) {
    int i;

    for (i = 0; i < len-1; ++i) {
        if (!isblankchar(s[i]))
            return 0;
    }
    return 1;
}

/* removetrailing: removes trailing blanks */
void removetrailing(char s[], int len) {
    int i;

    // start from i = len-2 since i = len-1 will be '\n'
    for (i = len-2; i >= 0; --i) {
        if (isblankchar(s[i])) {
            s[i] = '\n';
            s[i+1] = '\0';
        }
        else
            return;
    }
}