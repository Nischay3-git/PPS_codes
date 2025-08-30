//Write a program to calculate the simple interest (SI = P × R × T / 100)
#include <stdio.h>
int main(){
    float si,r;
    int p,t;

    printf("Enter the principal value : ");
    scanf("%d",&p);
    printf("Enter the rate of interest : ");
    scanf("%f",&r);
    printf("Enter the time period : ");
    scanf("%d",&t);
    
    si= (p*r*t)/100;
    printf("The simple interest is = %.2f",si);

    return 0;
}