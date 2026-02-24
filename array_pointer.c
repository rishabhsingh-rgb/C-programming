#include<stdio.h>
void main()
{
    int a[30],n,i;
    int *p;
    p=a;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
