#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300 */

int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    celsius = lower;
    printf("%7s\t%10s\n", "Celsius", "Fahrenheit");
    while (celsius <= upper) {
        fahr = 9*celsius / 5 + 32;
        printf("%10d\t%7d\n", celsius, fahr);
        celsius = celsius + step;
    }
}