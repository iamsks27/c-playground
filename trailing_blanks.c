#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int limit);
int remove_trailing_blanks(char s[], int length);

int main(int argv, char **argc)
{

    int len, modified_len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        printf("input string length: %d\n", len);

        modified_len = remove_trailing_blanks(line, len);

        printf("%s", line);
        printf("%d\n", modified_len);
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

int remove_trailing_blanks(char s[], int length)
{
    int i;
    for (i = length - 2; s[i] == ' ' || s[i] == '\t'; --i)
        ;

    s[++i] = '\n';
    s[++i] = '\0';

    return i;
}