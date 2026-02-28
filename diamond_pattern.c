#include<stdio.h>
void main()
{
    int row,i,j,k;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=row-i;k++)
          printf(" ");
        for(j=1;j<=2*i-1;j++)
          printf("*");
        printf("\n");    
    }
    for(i=1;i<row;i++)
    {
        for(k=1;k<=i;k++)
          printf(" ");
        for(j=1;j<=2*row-(2*i+1);j++)
          printf("*");
        printf("\n");    
    }
}
