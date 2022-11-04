/*Program to convert an integer from octal to decimal*/
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
    printf("decimal value is=%d",o);
}