// Write a program to calculate the Area of a Rectangle.Input appropriate data from the user.

#include<stdio.h>
int main()
{
     int length,width;
     printf("Enter the length and Width of the Rectangle : ");
     scanf("%d%d",&length,&width);
     printf("Area of the Rectangle is : %d ",length*width);
     printf("\n");
     return 0;
}