//Write a C program that converts lowercase letters to uppercase letters.
#include <stdio.h>

int main(void)
{
    char ch;

    //scanf("%c", &ch);//在读入字符前，scanf函数不会跳过空白字符
    scanf(" %c", &ch);//scanf函数格式串中的空白意味着“跳过任意个空白字符”

    if ('a' <= ch && ch <= 'z')
    {
        ch = ch - 'a' + 'A';
    }

    printf("%c", ch);

    return 0;
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    scanf(" %c", &ch);

    ch = (char) toupper(ch);

    printf("%c", ch);

    return 0;
}
*/