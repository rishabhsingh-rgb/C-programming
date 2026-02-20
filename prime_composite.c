#include<stdio.h>
void main()
{
int i=1,count=0,n;
printf("Enter a number: ");
scanf("%d",&n);
while(i<=n)
{
	if(n%i==0)
	count++;
	i++;
}
if(count==2)
printf("%d is a prime number.",n);
else
printf("%d is a composite number.",n);
}
