#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = upper;
    printf("%10s\t%7s\n", "Fahrenheit", "Celsius");
    while (fahr >= lower) {
        celsius = 5*(fahr-32) / 9;
        printf("%10d\t%7d\n", fahr, celsius);
        fahr = fahr - step;
    }
}