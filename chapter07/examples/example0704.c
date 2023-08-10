//int i = -10,unsigned u = 10,What is the result of the expression i < u.

#include <stdio.h>

int main(void)
{
    int i = -10;
    unsigned int u = 10;

    printf("%d", i < u);//比较前，i转换成unsigned int型

    return 0;
}