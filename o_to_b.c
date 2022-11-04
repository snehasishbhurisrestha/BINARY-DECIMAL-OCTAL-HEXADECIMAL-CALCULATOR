/*Program to convert an integer from octal to binary*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,o=0,c=0,i=0;
    printf("enter octal number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        c=n%10;
        n/=10;
        o+=c*pow(8,i);
        i++;
    }
    int p,a[10],j=0;
    while(o!=0)
    {
        p=o%2;
        a[j++]=p;
        o/=2;
    }
    int k;
    for(k=j-1;k>=0;k--)
    {
        printf("%d",a[k]);
    }
}