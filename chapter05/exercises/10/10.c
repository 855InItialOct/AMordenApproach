#include <stdio.h>

int main(void)
{
    int i;

    i = 1;
    switch (i % 3)
    {
        case 0:
            printf("Zero");
        case 1:
            printf("One");
        case 2:
            printf("Two");
    }

    return 0;
}