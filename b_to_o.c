/*Program to convert an integer from binary to octal*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,b=0,c=0,i=0,p;
    printf("enter binary number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        c=n%10;
        n/=10;
        b+=c*pow(2,i);
        i++;
    }
    int a[10],j=0,k;
    while(b!=0)
    {
        p=b%8;
        a[j++]=p;
        b/=8;
    }
    for(k=j-1;k>=0;k--)
    {
        printf("%d",a[k]);
    }

}