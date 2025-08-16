// Write a program to input an ASCII code from the user and print its corresponding Character.

#include<stdio.h>

int main()
{
   int code;
   printf("Enter the ASCII code to fetch its corresponding Character : ");
   scanf("%d",&code);
   printf("Character corresponding to ASCII value %d is %c",code,code);
   printf("\n");
   return 0;
}