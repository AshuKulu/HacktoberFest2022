#include<stdio.h>
void main()
{
    int a[10],b[10],i,m,n,j;
    printf("Enter the size of set A:");
    scanf("%d",&m);
    printf("Enter the size of set B:");
    scanf("%d",&n);
    printf("Enter the elements of set A:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of set B:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("AXB=");
    printf("{");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("(%d,%d),",a[i],b[j]);
        }
    }
    printf("\b}");
}
