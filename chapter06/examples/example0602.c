//Please display a "backward count" message on the terminal

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer:");
    scanf("%d", &n);

    while (n > 0)
    {
        printf("T minus %d and counting\n", n);
        n--;
    }

    return 0;
}