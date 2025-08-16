// Write a program to input three characters from the User and display characters ith their corresponding ASCII codes.

#include<stdio.h>

int main()
{
    char ch1,ch2,ch3;
    printf("Enter Three Characters to fetch their corresponding ASCII codes : ");
    scanf("%c %c %c",&ch1,&ch2,&ch3);
    printf("ASCII code of %c is %d \n",ch1,ch1);
    printf("ASCII code of %c is %d \n",ch2,ch2);
    printf("ASCII code of %c is %d \n",ch3,ch3);
    return 0;
}