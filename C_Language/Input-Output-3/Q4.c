// Write a program to print the last digit of a given number.

#include<stdio.h>

int main()
{

   int x;

   printf("Enter an Integer : ");
   scanf("%d",&x);
   printf("Last Digit of the Number %d is %d ",x,x%10);
   printf("\n");
   return 0;
}