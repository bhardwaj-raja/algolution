#include <stdio.h>
void main()
{
    int a[100];
    int i,p;
    int n,x;
    printf("enter size of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&x);
    for(p=0;p<(n);p++)
    {
       if(x==a[p])
       {
           break;
       }
    }
     if(p<=n)
         printf("numbers is found at %d:",(p+1));
     else
         printf("numbers is not found:");
}
