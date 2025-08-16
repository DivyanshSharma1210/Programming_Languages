// Write a program to Calculate the Volume of a Cuboid.

#include<stdio.h>

int main()
{
    float length,breadth,height;
    printf("Enter the Length, Breadth and Height of the Cuboid : ");
    scanf("%f %f %f",&length,&breadth,&height);
    printf("Volume of the Cuboid is : %f",length*breadth*height);
    printf("\n");
    return 0;
}