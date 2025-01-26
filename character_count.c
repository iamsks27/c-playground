#include<stdio.h>

int main()
{
    int nc = 0;

    int c;
    while ((c = getchar()) != EOF && c != '\n') {
        nc++;
    }

    printf("Total chars: %d\n", nc);
}
