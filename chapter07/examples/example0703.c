//Write a C program that skips unquantifiable Spaces.

#include <stdio.h>

int main(void)
{
    int ch;

    while ((ch=getchar())!=' ')
        ;
    printf("%c", ch);

    return 0;
}