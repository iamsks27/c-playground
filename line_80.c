#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */
#define LIMIT 80

int readline(char line[], int maxline);

int main(int argv, char **argc)
{
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = readline(line, MAXLINE)) > 0)
    {
        if (len >= LIMIT)
        {
            printf("%s\n", line);
        }
    }

    return 0;
}

int readline(char line[], int limit)
{
    int c, i = 0;

    while (i < limit - 1 && (c = getchar()) != EOF && c != '\n')
    {
        line[i++] = c;
    }

    if (c == '\n')
    {
        line[i++] = c;
    }

    line[i] = '\0';

    return i;
}