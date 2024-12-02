#include <stdio.h>
void main()
{
    int a[7];
    int i,temp;
    printf("enter 7 integers in an array:");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(7/2);i++)
    {
        temp=a[6-i];
        a[6-i]=a[i];
        a[i]=temp;
    }
     printf("reverse order of array is ::");
     
    for(i=0;i<7;i++)
    {
        printf("%d\n",a[i]);
    }
}
