//long i;int j=1000;How to get the correct mathematical result of i=j*j on a 16-bit machine.

#include <stdio.h>

int main(void)
{
    long i;
    int j = 1000;

    i = (long) j * j;//j是int型，j*j的结果仍然是int型，但超过16位机器上int型的取值范围。

    printf("%ld", i);

    return 0;
}