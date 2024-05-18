#include <stdio.h>

int power(int base, int n); /* function prototype */
// int power(int, int); /* this is also a correct syntax for function prototype */

int main(int argv, char **argc) {

    for (int i = 0; i < 10; i++) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

int power(int base, int n) {
    int res = 1;

    for (int i = 1; i <= n; i++) {
        res *= base;
    }

    return res;
}
