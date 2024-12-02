#include <stdio.h>
void main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10,12,14,16,18,20};
    int sizea=sizeof(a)/sizeof(int);
    int sizeb=sizeof(b)/sizeof(int);
    int c[100];
    int size= sizea+sizeb;
    int i=0,j=0,k=0;
    
    while(i<sizea&&j<sizeb)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i++;k++;
        }
        else
        {
            c[k]=b[j];
            j++;k++;
        }
    }
    while(i<sizea)
    {
        c[k]=a[i];
        i++;k++;
    }
    while(j<sizeb)
    {
        c[k]=b[j];
        j++;k++;
    }
    
    for(int m=0;m<size;m++)
    {
        printf("%d\n",c[m]);
    }
}
