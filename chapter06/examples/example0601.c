//Please output the smallest power of 2 greater than or equal to n.

#include <stdio.h>

int main(void)
{
    int n, i = 1;

    printf("Enter an integer:");
    scanf("%d", &n);

    while (i < n)
    {
        i *= 2;
    }

    printf("%d", i);

    return 0;
}