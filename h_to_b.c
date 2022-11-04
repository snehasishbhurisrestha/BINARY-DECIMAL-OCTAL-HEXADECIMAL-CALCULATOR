/*Program to convert an integer from hexa decimal to binary*/
#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    char h[20];
    int len,dec,i=0;
    int tdv=0;
    printf("Enter the hexadecimal value\n");
    gets(h);
    len=strlen(h);
    len--;
    while (h[i]!=NULL)
    {
        if(h[i]>='0' && h[i]<='9')
        {
            dec=h[i]-48;
        }
        else if(h[i]>='a' && h[i]<='f')
        {
            dec=h[i]-97+10;
        }
        else if(h[i]>='A' && h[i]<='F')
        {
            dec=h[i]-65+10;
        }
        tdv+=dec*pow(16,len);
        len--;
        i++;
    }
    int a[10],k=0,m,p;
    while(tdv!=0)
    {
        p=tdv%2;
        a[k++]=p;
        tdv/=2;
    }
    for(m=k-1;m>=0;m--)
    {
        printf("%d",a[m]);
    }
}