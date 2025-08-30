//Write a program to define a symbolic constant for the value of Pi and calculate the area of a circle.
#include <stdio.h>
#define pi 3.141
int main()
{
    float r,a;// variable declaration for radius and area of the circle
    printf("Enter the radius of the circle in cm: ");
    scanf("%f",&r);

    a= pi*r*r;
    printf("The area is= %.2f",a);
    
    return 0;
}