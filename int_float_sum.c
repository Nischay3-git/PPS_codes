//Write a program to input an integer and a float and print their sum.
#include <stdio.h>
int main()
{  
    int integer;
    float fl;
    printf("Enter an integer value: ");
    scanf("%d",&integer);
    printf("Ente the float value :");
    scanf("%f",&fl);
    
    float sum;
    sum=integer+fl;
    printf("The sum is %.2f",sum);
    
    return 0;
}