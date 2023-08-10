#include <stdio.h>

int main(void)
{
    int a, b, c;
    float x, y;
/* 
   scanf("%d",&a);
   printf("%d\n", a);
   scanf(" %d", &b);
   printf("%d\n", b);

   scanf("%d-%d-%d", &a, &b, &c);
   printf("%d\n%d\n%d\n", a, b, c);
   scanf("%d -%d -%d", &a, &b, &c);
   printf("%d\n%d\n%d\n", a, b, c);

   scanf("%f", &x);
   scanf("%f ", &y);
   printf("%f\n", x);
   printf("%f\n", y);
 */
   scanf("%f,%f", &x, &y);
   printf("%f\n%f\n", x, y);
   scanf("%f, %f", &x, &y);
   printf("%f\n%f\n", x, y);


    return 0;
}