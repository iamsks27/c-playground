#include <math.h>
#include <stdio.h>
#include <string.h>

int atoi(char s[]) {
    int len = strlen(s);
    int r = 0;

    int last_idx = len - 1;
    for (int i = last_idx; i >= 0; i--) {
        r += pow(10, last_idx - i) * (s[i] - '0');
    }

    return r;
}

int main()
{
    printf("%d\n", atoi("123"));
    return 0;
}
