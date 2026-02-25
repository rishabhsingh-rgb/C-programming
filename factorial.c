#include<stdio.h>
int main()
{
    int num,i=1;
    unsigned long long fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is: %llu",num,fact);
    return 0;
}
