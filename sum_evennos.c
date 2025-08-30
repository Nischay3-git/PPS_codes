//calculate sum of first N even numbers
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the Nth number: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i=i+2)
    {
        sum+= i;
    }
    printf("The sum is= %d",sum);

    return 0;
}