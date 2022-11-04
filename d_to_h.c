/*Program to convert an integer from decimal to hexa decimal*/
#include<stdio.h>
#include<string.h>
void main()
{
    int n,p,i=0;
    char h[15],a[15];
    printf("enter number");
    scanf("%d",&n);
    while(n!=0)
    {
        p=n%16;
        if(p>9)
        {
            h[i++]=p+55;
        }
        else
        {
            h[i++]=p+48;
        }
        n=n/16;
    }
    int j,k,l=0;
    j=strlen(h);
    j-=1;
    for(k=j;k>=0;k--)
    {
        a[l++]=h[k];
    }
    a[l]=NULL;
    puts(a);
    
}