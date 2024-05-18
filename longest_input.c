#include <stdio.h>

#define MAXLINE 50 /* maximum input line size */

int readline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argv, char **argc)
{
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = readline(line, MAXLINE)) > 0)
    {
        if (max < len)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
    {
        printf("\nThe longest line is:\n");
        printf("%s\n", longest);
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

    // for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    // {
    //     line[i] = c;
    // }

    // // Add new line as well in the string
    // if (c == '\n')
    // {
    //     line[i++] = c;
    // }

    // // Terminating the string
    // line[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i = 0;

    // Copying the value from one string to another unless terminate character is encountered.
    while ((to[i] = from[i]) != '\0')
        i++;
}