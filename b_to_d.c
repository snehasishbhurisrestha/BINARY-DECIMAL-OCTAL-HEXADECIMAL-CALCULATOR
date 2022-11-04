/*Program to convert an integer from binary to decimal*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,b=0,c=0,i=0;
    printf("enter binary number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        c=n%10;
        n/=10;
        b+=c*pow(2,i);
        i++;
    }
    printf("the decimal value is=%d",b);

}