//Write a program to evaluate the expression: (a + b) * (c - d).
#include <stdio.h>
int main(){
    int a,b,c,d,exp;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    printf("Enter the fourth number: ");
    scanf("%d",&d);
    
    exp=(a+b)*(c-d);
    printf("The resultant value is: %d",exp);

    return 0;
}