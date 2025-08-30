// Write a program to print your name, course, and university.
#include <stdio.h>
int main()
{
    char name[100], course[100], uni[100]; // declaring string variables with character limit=100

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your course: ");
    scanf("%s", &course);

    printf("Enter your University name: ");
    scanf("%s", uni); // using & before variable in string type is optional

    printf("Name: %s", name);
    printf("\nCourse: %s", course);
    printf("\nUniversity: %s", uni);
    return 0;
}