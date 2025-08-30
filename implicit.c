//Write a program to demonstrate implicit type conversion in an expression.
#include <stdio.h>
int main(){
    int a = 50;
    float b = a;// implicit type casting

    printf("b is equal to %.2f",b);
    return 0;
}