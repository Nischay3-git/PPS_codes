//Write a program to declare and print an integer, a float, and a character variable
#include <stdio.h>
int main(){
    int a;    //declaring integer variable
    float b;  //declaring floating variable
    char ch;  //declaring character variable
    
    printf("Enter an integer value: ");
    scanf("%d",&a);
    printf("Enter a float value: ");
    scanf("%f",&b);
    printf("Enter a character value: ");
    // scanf("%c",&ch);   this reads the newline from prev scanf as a character and will not take the desired input
    scanf(" %c",&ch);
    printf("\nThe integer is : %d",a);
    printf("\nThe float is : %f",b);
    printf("\nThe character is : %c",ch);

    return 0;
}