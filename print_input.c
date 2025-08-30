//Write a program to display “Welcome to C Programming” using a separate user-defined function.

#include <stdio.h>
void display();
int main()
{ 
    display();
    return 0;
}
void display()
{
    printf("Welcome to C Programming\n");
}