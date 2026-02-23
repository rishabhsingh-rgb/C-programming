#include<stdio.h>
void main()
{
    int num,org_num,sum=0,rem=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    org_num=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(sum==org_num)
        printf("%d is a Armstrong number.",org_num);
    else
        printf("%d is not an Armstrong number.",org_num);

}
