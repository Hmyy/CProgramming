/*
 本题要求编写一个简单计算器程序，可根据输入的运算符，对2个整数进行加、减、乘、除或求余运算。题目保证输入和输出均不超过整型范围。
 
 输入格式：
 
 输入在一行中依次输入操作数1、运算符、操作数2，其间以1个空格分隔。操作数的数据类型为整型，且保证除法和求余的分母非零。
 
 输出格式：
 
 当运算符为+、-、*、/、%时，在一行输出相应的运算结果。若输入是非法符号（即除了加、减、乘、除和求余五种运算符以外的其他符号）则输出ERROR。
 
 输入样例1：
 
 -7 / 2
 输出样例1：
 
 -3
 输入样例2：
 
 3 & 6
 输出样例2：
 
 ERROR
 */

#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;
    scanf("%d %c %d", &num1, &operator, &num2);
    
    switch (operator) {
        case '+':
            printf("%d", num1+num2);
            break;
        case '-':
            printf("%d", num1-num2);
            break;
        case '*':
            printf("%d", num1*num2);
            break;
        case '/':
            printf("%d", num1/num2);
            break;
        case '%':
            printf("%d", num1%num2);
            break;
        default:
            printf("ERROR");
            break;
    }
    return 0;
}
