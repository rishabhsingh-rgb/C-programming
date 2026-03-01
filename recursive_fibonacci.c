#include<stdio.h>
int fib(int i);
void main()
{
    int n,i;
    printf("Enter number of terms in fibonacci series: ");
    scanf("%d",&n);
    printf("\nThe fibonacci series is: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",fib(i));
    }
}    
int fib(int i)
{
  if(i==1)
    return 0;
  else if(i==2)
    return 1;
  else
    return fib(i-1)+fib(i-2);    
}
