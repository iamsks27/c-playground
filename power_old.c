#include<stdio.h>

// This is a older-style version & it is deprecated should be avoided. 

int power();

int main(int argv, char **argc) {

    for (int i = 0; i < 10; i++) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

int power(base, n)
int base, n; 
{
    int res = 1;

    for (int i = 1; i <= n; i++) {
        res *= base;
    }

    return res;
}