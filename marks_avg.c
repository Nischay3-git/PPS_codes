//Write a program to input marks of 3 subjects and print the average
#include <stdio.h>
int main(){
    int m1,m2,m3;
    float avg;
    printf("Enter marks in first subject: ");
    scanf("%d",&m1);
    printf("Enter marks in second subject: ");
    scanf("%d",&m2);
    printf("Enter marks in third subject: ");
    scanf("%d",&m3);

    avg= (m1+m2+m3)/3;
    printf("The average is = %.1f", avg);
    return 0;
}