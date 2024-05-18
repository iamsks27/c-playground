#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int limit);
void reverse(char s[], int length);

int main(int argv, char **argc)
{

    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        reverse(line, len);

        printf("%s", line);
    }

    return 0;
}

int get_line(char s[], int limit)
{
    int c, i = 0;

    // Adding characters till the third last index
    while (i < limit - 1 && (c = getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
    }

    // Adding '\n' at the second last index
    if (c == '\n')
    {
        s[i++] = '\n';
    }

    // Adding null character at the last index.
    s[i] = '\0';

    // Returning the length of string
    return i;
}

void reverse(char s[], int length)
{
    int i = 0, j = length - 2;
    char temp;
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }

    return;
}