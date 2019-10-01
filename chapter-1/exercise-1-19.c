#include <stdio.h>
#define MAXLINE 1000

int fetchline(char s[], int lim);
void reverse(char s[], int len);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = fetchline(line, MAXLINE)) > 0) {
        reverse(line, len);
        printf("%s\n\n", line);
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

/* reverse: reverses character string in place */
void reverse(char s[], int len)
{
    int i;
    char temp;

    for(i = 0; i < len/2; ++i) {
        temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
}