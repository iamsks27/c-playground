#include <stdio.h>

#define MAXLINE 10

int get_line(char line[], int max_line_len)
{
    int c, i;

    i = 0;
    while (i < max_line_len - 1 && (c = getchar()) != EOF && c != '\n')
    {
        line[i] = c;
        ++i;
    }

    // flush out input stream if exceeding max_line_len limit
    while (i >= max_line_len - 1 && (c = getchar()) != '\n')
        ;

    if (c == '\n')
    {
        line[i] = '\n';
        ++i;
    }

    line[i] = '\0';

    return i;
}

int main(void)
{
    char line[MAXLINE];

    printf("%d\n", get_line(line, MAXLINE));

    return 0;
}