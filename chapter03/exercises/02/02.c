#include <stdio.h>

int main(void)
{
    float x = 000123.0000456000f;
    double a;
    float m,n;
    m=11111111.111f;n=22222222.222f;
    printf("%f\n",m+n);

    a = 1000 / 3.0;

    printf("%20.15f\n", a);
    printf("%e\n", x);
    printf("%.15e\n", x);
    printf("%-8.1e\n", x);

    printf("%10.6e\n", x);

    printf("%-8.3f\n", x);

    printf("%6.0f\n", x);

    return 0;
}