//1.程序填空题

//给定程序中，函数fun的功能是将a和b所指的两个字符串转换成面值相同的整数，并进行相加，将结果作为函数值返回，规定字符串中只含9个的以下数字字符。
//
//例如，主函数中输入字符串 : 32486和12345， 在主函数中输出的函数值为 : 44831 。
//
//请在程序的下划线处填入正确的内容并把下划线删除，使程序得出正确的结果。
//
//注意 : 源程序存放在考生文件夹下的BLANK1.C中。
//
//不得增行或删行，也不得更改程序的结构!

#include  <stdio.h>

#include  <string.h>

#include  <ctype.h>

#define  N  9

long  ctod(char* s)

{
    long  d = 0;

    while (*s)

        if (isdigit(*s)) {                                 //isdigit判断是否是数字,是数字，返回TRYE否则返回0

            /**********found**********/

            d = d * 10 + *s - '0';                         //ASSCII码中如何将字符换算成数字?直接与字符0相减-----所以直接减去字符0得数字。

            /**********found**********/

            s++;                                           //指针接受的首地址，所以经过一次运算之后++到达下一个地址 -----这个地方其实可以和上面进行融合--*(s++)
        }

    return  d;

}

long  fun(char* a, char* b)

{

    /**********found**********/

    return  ctod(a)+ctod(b);

}

main()

{
    char  s1[N], s2[N];

    do

    {
        printf("Input  string  s1 : "); gets(s1);
    }

    while (strlen(s1) > N);

    do

    {
        printf("Input  string  s2 : "); gets(s2);
    }

    while (strlen(s2) > N);

    printf("The result is:  %ld\n", fun(s1, s2));

    getchar();

}

