//Difference between pre and post increment 
#include <stdio.h>
int main()
{
    int a=5, b= 6;
    printf("This is the output for pre-increment of a, new a = %d",++a);
    printf("\nTHis is the output for post increment of b= %d",b++);

    printf("\nThe new value of b is stored after the execution of printf function.\nThe new value of b is= %d",b);
    return 0;

}