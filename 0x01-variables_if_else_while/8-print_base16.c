#include <stdio.h>

int main(void)
{
    char hexChar;

    for (hexChar = '0'; hexChar <= '9'; hexChar++)
    {
        putchar(hexChar);
    }

    for (hexChar = 'a'; hexChar <= 'f'; hexChar++)
    {
        putchar(hexChar);
    }

    putchar('\n');

    return 0;
}

