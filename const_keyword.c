// Write a program to demonstrate the use of const keyword.
#include "stdio.h"
int main()
{
    int b = 73;
    b = 56;
    printf("b = %d",b);
    const int a = 1729;
    // a = 573;   --> This creates error in the program
    // printf("a = %d", a);
    return 0;
}