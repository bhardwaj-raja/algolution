#include <stdio.h>
void main()
{
    int a[5];
    int i,f=0;
    printf("enter 5 integers in an array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(5/2);i++)
    {
       if(a[i]==a[4-i])
       {
           f=0;
       }
       else
       {
           f=1;
           break;
       }
    }
     if(f==0)
         printf("numbers are palindrome::");
     else
         printf("numbers are not palindrome::");
}
