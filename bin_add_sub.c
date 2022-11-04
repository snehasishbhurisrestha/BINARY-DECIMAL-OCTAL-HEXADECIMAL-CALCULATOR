#include<stdio.h>
#include<math.h>
void main()
{
      int x,z,k=0;
      int n,b=0,c=0,i=0;
      printf("Input First Binary number\n");
      scanf("%d",&x);
      printf("input Second binary number\n");
      scanf("%d",&z);
      while(x!=0)
      {
            c=x%10;
            x/=10;
            b+=c*pow(2,i);
            i++;
      }
      int j=0;
      while(z!=0)
      {
            n=z%10;
            z/=10;
            k+=n*pow(2,j);
            j++;
      }
      int m,f;
      m=b+k;
      f=b-k;
      int a[10],d=0,e,p;
	while(m!=0)
	{
		p=m%2;
		a[d++]=p;
		m/=2;
	}
      printf("The addition is=");
	for(e=d-1;e>=0;e--)
      {
            printf("%d",a[e]);
      }
      int arr[10],lo=0,ex,q;
	while(f!=0)
	{
		q=f%2;
		arr[lo++]=q;
		f/=2;
	}
      printf("The Subtraction is=");
	for(ex=lo-1;ex>=0;ex--)
      {
            printf("%d",arr[ex]);
      }
}