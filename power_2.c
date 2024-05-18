#include<stdio.h>

// Here we are defining the function before it is getting used.
// So, function prototype is not required.
int power(int base, int n) {
    int res = 1;

    for (int i = 1; i <= n; i++) {
        res *= base;
    }

    return res;
}

int main(int argv, char** argc) {

    for (int i = 0; i < 10; i++) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}