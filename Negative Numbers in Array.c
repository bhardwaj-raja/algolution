#include <stdio.h>
void main()
{
    int a[]={10,-1,-2,0,5,6,-320,685,-47,85,4545,76};
    int count=0;
    int n=sizeof(a)/sizeof(int);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            count++;
        }
    }
    printf("num. of negative no. in array :%d",count);
}
