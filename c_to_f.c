// WAP to input temperature in celsius and print in fahrenheit
#include <stdio.h>
int main()
{
    // F = (C * 9/5) + 32
    float f, c;
    printf("Enter the celsius value: ");
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32;
    printf("The value in fahrenheit is: %.2f", f);
    return 0;
}