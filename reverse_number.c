#include<stdio.h>
void main()
{
    int num,rem,rev_num=0,org_num;
    printf("Enter the number: ");
    scanf("%d",&num);
    org_num=num;
    while(num>0)
    {
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    printf("The reverse of %d is %d.",org_num,rev_num);
}
