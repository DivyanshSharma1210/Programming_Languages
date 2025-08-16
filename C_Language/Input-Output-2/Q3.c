// Write a program to calculate Simple Interest

#include<stdio.h>

int main()
{
    float principle,rate,time;
    printf("Enter the Principle , rate and time to calculate the Simple Interest : ");
    scanf("%f %f %f",&principle,&rate,&time);
    printf("Simple Interest is : %f ",(principle*rate*time)/100);
    printf("\n");
    return 0;
}