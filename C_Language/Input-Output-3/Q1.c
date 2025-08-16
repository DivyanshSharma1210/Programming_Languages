// Write a program to input a character from the user and print its ASCII code.

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a Character to know its ASCII value : ");
    scanf("%c",&ch);
    printf("ASCII value of %c is %d ",ch,ch);
    printf("\n");
    return 0;
}
