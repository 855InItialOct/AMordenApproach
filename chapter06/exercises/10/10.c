#include <stdio.h>

int main(void)
{

    int i;

    for (i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
            goto end;
        printf("%d ", i);
        end:
    }

    return 0;
}
/*
#include <stdio.h>

int main(void)
{

    int i;

    for (i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
            continue;
        printf("%d ", i);
    }

    return 0;
}
*/