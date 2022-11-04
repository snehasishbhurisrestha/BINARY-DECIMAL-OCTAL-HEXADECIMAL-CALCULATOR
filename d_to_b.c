/*Program to convert an integer from decimal to binary*/
#include<stdio.h>
void main()
{
	int a[10],i=0,j,n,p;
	printf("Enter an integer:");
	scanf("%d",&n);
	printf("\nThe binary equivalent of %d is:",n);
	while(n!=0)
	{
		p=n%2;
		a[i++]=p;
		n/=2;
	}
	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);
	getc;
}