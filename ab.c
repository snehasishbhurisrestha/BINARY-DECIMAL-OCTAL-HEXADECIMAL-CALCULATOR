#include<stdio.h>
void main()
{
    int binary,c,j,i=0;
    int onescomplement[200];   
    int twoscomplement[200]; 
    printf("\nEnter the binary number : ");  
    scanf("%d",&binary);
    while(binary!=0)
    {
        c=binary%10;
        if(c==0)
            onescomplement[i++]=1;
        else if(c==1)
            onescomplement[i++]=0;
        binary/=10;        
    }
    for(j=i;j>=0;j--)
    {
        printf("%d",onescomplement[j]);
    }

}