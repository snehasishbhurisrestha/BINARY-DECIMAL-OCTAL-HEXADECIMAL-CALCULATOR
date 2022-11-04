/*Program to convert an integer from binary to hexa decimal*/
#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
    int n,b=0,c=0,i=0,p;
    char h[15],g[15];
    printf("enter binary number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        c=n%10;
        n/=10;
        b+=c*pow(2,i);
        i++;
    }
    int a[10],j=0;
    while(b!=0)
    {
        p=b%16;
        if(p>9)
        {
            h[j++]=p+55;
        }
        else
        {
            h[j++]=p+48;
        }
        b/=16;
    }
    int k=0,m,l=0;
    while(h[k]!=NULL)
    {
        k++;
    }
    k-=1;
    for(m=k;m>=0;m--)
    {
        g[l++]=h[m];
    }
    g[l]=NULL;
    puts(g);
}