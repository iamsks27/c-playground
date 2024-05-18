#include<stdio.h>

int main() {
    float fahr, celsius;
    int upper, lower, step;

    lower = 0;
    upper = 100;
    step = 20;

    celsius = 0;
    while (celsius <= upper) {
        fahr = (9.0/5.0 * celsius) + 32;

        printf("%3.0f\t%6.0f\n", celsius, fahr);

        celsius += step;
    }

    return 0;
}