// Write a program to input name, age, and percentage of a student, and print them in a formatted way.

#include <stdio.h>
int main()
{
    char name[50];
    int age;
    float percentage;

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("ENter your age: ");
    scanf("%d", &age);
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    printf("---------STUDENT DETAILS---------");

    printf("\n\nName: %s", name);
    printf("\nAge: %d", age);
    printf("\nPercentage: %.1f", percentage);
    printf("\n---------------------------------");
    return 0;
}