//Write a C program that reads in and ignores the remaining characters in the current input line.

#include <stdio.h>

int main(void)
{
    int c1, c2;

//    do
//    {
//        c1 = getchar();
//    } while (c1 != '\n');


    c1 = getchar();
    //getchar();//只能读入一个回行符
    while (getchar()!='\n')//为了读入下一次的输入中的第一个字符
        ;
    c2 = getchar();

    printf("%c\n%c\n", c1, c2);

    return 0;
}

/* 
#include <stdio.h>

int main(void)
{
    char c1,c2;

    do
    {
        scanf("%c", &c1);
    } while (c1 != '\n');

    scanf(" %c", &c2);

    printf("%c\n%c\n", c1, c2);

    return 0;
}
 */