#include <stdio.h>
#include<string.h>

#define MAX_LEN 10

int main(void)
{
    char line[MAX_LEN];
    int c, i = 0;

    while (i < MAX_LEN - 2 && (c = getchar()) != EOF && c != '\n')
    {
        line[i++] = c;
    }

    printf("i: %d\n", i);

    while (i >= MAX_LEN - 2 && (c = getchar()) != '\n')
    {
        printf("%c", c);
    }

    printf("\ni: %d\n", i);

    if (c == '\n')
    {
        line[i++] = '\n';
    }

    printf("i: %d\n", i);

    line[i] = '\0'; // NULL termination

    printf("%s\n", line);
    printf("%lu\n", strlen(line));

    return 0;
}