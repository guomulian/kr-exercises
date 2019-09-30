#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

float celsius(float fahr);

int main()
{
    int fahr, cel;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    printf("%10s\t%7s\n", "Fahrenheit", "Celsius");
    while (fahr <= upper) {
        cel = celsius(fahr);
        printf("%10d\t%7d\n", fahr, cel);
        fahr = fahr + step;
    }
}

float celsius(float fahr)
{
    return 5*(fahr-32)/9;
}