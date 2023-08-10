#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Enter an integer:");
    scanf("%d", &m);

    for (n = 0; m > 0; n++, m /= 2)
    {}

    return 0;
}