//Write a C program by reading a string of numbers and integrating (0 does not count).

#include <stdio.h>

int main(void)
{
    int n, i = 0, product = 1;

    while (i < 5)
    {
        printf("Enter a integer:");
        scanf("%d", &n);
        if (0 == n)
        {
            continue;
        }
        product *= n;
        i++;
    }

    printf("The product is %d\n", product);

    return 0;
}