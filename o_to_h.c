/*Program to convert an integer from octal to hexadecimal*/
#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
    int n,o=0,c=0,i=0;
    char h[15],a[15];
    printf("enter octal number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        c=n%10;
        n/=10;
        o+=c*pow(8,i);
        i++;
    }
    int p,j=0;
    while(o!=0)
    {
        p=o%16;
        if(p>9)
        {
            h[j++]=p+55;
        }
        else
        {
            h[j++]=p+48;
        }
        o/=16;
    }
    int k=0,m,l=0;
    while(h[k]!=NULL)
    {
        k++;
    }
    k-=1;
    for(m=k;m>=0;m--)
    {
        a[l++]=h[m];
    }
    a[l]=NULL;
    puts(a);
}