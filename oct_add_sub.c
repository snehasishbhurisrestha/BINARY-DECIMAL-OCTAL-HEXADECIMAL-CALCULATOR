#include<stdio.h>
#include<math.h>
void main()
{
      int x,z,k=0;
      int n,o=0,c=0,i=0;
      printf("Input First octal value\n");
      scanf("%d",&x);
      printf("input Second octal value\n");
      scanf("%d",&z);
      while(x!=0)
      {
            c=x%10;
            x/=10;
            o+=c*pow(8,i);
            i++;
      }
      int j=0;
      while(z!=0)
      {
            n=z%10;
            z/=10;
            k+=n*pow(8,j);
            j++;
      }
      int m,f;
      m=o+k;
      f=o-k;
      int a[10],d=0,e,p;
	while(m!=0)
	{
		p=m%8;
		a[d++]=p;
		m/=8;
	}
      printf("The addition is=");
	for(e=d-1;e>=0;e--)
      {
            printf("%d",a[e]);
      }
      int arr[10],lo=0,ex,q;
	while(f!=0)
	{
		q=f%8;
		arr[lo++]=q;
		f/=8;
	}
      printf("The Subtraction is=");
	for(ex=lo-1;ex>=0;ex--)
      {
            printf("%d",arr[ex]);
      }
}