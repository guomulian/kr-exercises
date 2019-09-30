#include <stdio.h>

int main()
{
    printf("hello, \k\n");
}

/*

(...)/kr-exercises/exercise-2.c:5:20: warning: unknown escape sequence '\k' [-Wunknown-escape-sequence]
    printf("hello, \k\n");
                   ^~
1 warning generated.
hello, k
[Finished in 1.1s]

*/