// Write a program to calculate the average of three integers.Numbers are given by the User.

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Three Integers : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Average of Three Given Integers are : %d ",(a+b+c)/3);
    printf("\n");
    return 0;
}