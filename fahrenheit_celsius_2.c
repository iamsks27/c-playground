#include<stdio.h>

int main() {
    float fahr, celsius;
    int lower, higher, step;

    lower = 0;
    higher = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= higher) {
        celsius = 5.0/9.0 * (fahr - 32);
        // %x.yd -> x is width & y is precision
        // For e.g., %6f says that the number is to be at least six character wide
        // %.2f, specifies two characters after decimal point. 
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}