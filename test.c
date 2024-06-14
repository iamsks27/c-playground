#include <stdio.h>
#include <string.h>

int main()
{
    // char c;
    /*
    printf("%d\n", EOF);
    printf("%lu\n", sizeof(EOF));
    printf("%lu\n", sizeof(c));
    */

    // char items[100] = {'\0'};

    // printf("%s\n", items);
    // printf("%c\n", items[10]);

    // for (int i = 0; i < 100; i++)
    // {
    //     printf("%c,", items[i]);
    // }


    char s[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'T', '\n', '\0'};

    printf("%s\n", s);
    printf("%lu\n", strlen(s));
}