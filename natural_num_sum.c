#include<stdio.h>
int main()
{
	int sum=0,i,n;
	printf("Enter the value of n\n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum of first %d natural number is = %d\n",n,sum);
	return 0;
}
