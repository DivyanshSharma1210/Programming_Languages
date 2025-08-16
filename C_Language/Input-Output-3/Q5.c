// Write a program to print a given number but without its last digit.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter an Integer : ");
    scanf("%d",&x);
    printf("Here is Your Given Number without its Last Digit : %d",x/10);
    printf("\n");
    return 0;
    
}