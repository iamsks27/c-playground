#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>

typedef enum {
    GREEN,
    RED,
    BLUE
} Color;

typedef enum {
    BELL = '\a',
    BACKSPACE = '\b'
} Escapes;

size_t strlen_v2(const char msg[]) {
    int i = 0; 
    while (msg[i] != '\0')
        i++;
    return i;
}

int main()
{
    int c = 68;
    int i = 0;

    printf("%d\n", i);
    printf("%c\n", c);
    printf("%d\n", BLUE);
    printf("%d\n", BACKSPACE);


    const char msg[] = "warning: ";

    printf("%lu\n", strlen(msg));
    printf("%lu\n", strlen_v2(msg));
    return 0;
}
