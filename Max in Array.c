#include <stdio.h>
void main()
{
    int a[100];
    int n,temp;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    temp=a[0];
    for(int j=0;j<=n;j++)
    {
        if(temp<a[j])
            temp =a[j];
    }
    printf("maximum no. in an array :%d",temp);
}
