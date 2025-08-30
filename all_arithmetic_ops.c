//Write a program to perform all arithmetic operations on two numbers.
#include <stdio.h>
int main(){
    int a,b;
    int add,subtract,multiply,divide,modulus;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    
    add = a+b;
    printf("\nAddition= %d",add);
    subtract = a-b;
    printf("\nSubtraction= %d",subtract);
    multiply=a*b;
    printf("\nMultiplication=%d",multiply);
    divide= a/b;
    printf("\nDivision=%d",divide);
    modulus=a%b;
    printf("\nRemainder=%d",modulus);

    return 0;
}