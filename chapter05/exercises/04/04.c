#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter two integer numbers:");
    scanf("%d%d", &i, &j);

    printf("%d", (i > j) - (i < j));

    return 0;
}