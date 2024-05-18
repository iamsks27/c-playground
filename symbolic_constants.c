#include<stdio.h>

#define CELSIUS 'C' 
#define FAHRENHEIT 'F'
#define LOWER 0
#define UPPER 300
#define STEP 20
#define MUL 3.5

int main() {

    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d%c\t%6.1f%c\n", fahr, FAHRENHEIT, (5.0/9.0) * (fahr - 32), CELSIUS);
    }

    printf("%f\n", MUL);

    return 0;
}