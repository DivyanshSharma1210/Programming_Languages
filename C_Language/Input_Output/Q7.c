// Write a program to calculate the sum of two integers. Numbers are taken from user through Keyboard.

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);
    printf("Sum of %d and %d is %d",a,b,a+b);
    printf("\n");
    return 0;
}