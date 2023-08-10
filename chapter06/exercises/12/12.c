#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter a nonnegative integer:");
    scanf("%d", &n);

    for (i = 2; i * i <= n; i++)
    {
        if (0 == n % i)
        {
            break;
        }
    }
    if (i * i < n)
    {
        printf("%d is divisible by %d\n", n, i);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}