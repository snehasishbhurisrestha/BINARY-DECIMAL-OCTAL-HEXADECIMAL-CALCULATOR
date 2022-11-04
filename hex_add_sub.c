#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    char hex[20],he[20];
    int le,rlen,decm,lu=0;
    int tdva=0;
    printf("enter first hexadecimal value:");
    gets(hex);
    printf("\nenter second hexadecimal value:");
    gets(he);
    le=strlen(hex);
    rlen=strlen(he);
    le--;
    while(hex[lu]!= NULL)
    {
        if(hex[lu]>='0' && hex[lu]<='9')
            decm=hex[lu]-48;
        else if(hex[lu]>='a' && hex[lu]<='f')
            decm=hex[lu]-97+10;
        else if(hex[lu]>='A' && hex[lu]<='F')
            decm=hex[lu]-65+10;
        tdva+=decm*pow(16,le);
        le--;
        lu++;
    }
    int loo=0,decml;
    int tdvac=0;
    rlen--;
    while(he[loo]!=NULL)
    {
        if(he[loo]>= '0' && he[loo]<='9')
            decml=he[loo]-48;
        else if(he[loo]>= 'a' && he[loo]<= 'f')
            decml=he[loo]-97+10;
        else if(he[loo]>= 'A' && he[loo]<='F')
            decml=he[loo]-65+10;
        tdvac+=decml*pow(16,rlen);
        rlen--;
        loo++;
    }
    int ver1,ver2;
    int pac,lku=0;
    char list[15],abc[15];
    ver1=tdva+tdvac;
    ver2=tdva-tdvac;
    while(ver1!=0)
    {
        pac=ver1%16;
        if(pac>9)
            list[lku++]=pac+55;
        else
            list[lku++]=pac+48;
        ver1=ver1/16;    
    }
    int ver3,ver4,ver5=0;
    ver3=strlen(list);
    ver3-=1;
    for(ver4=ver3;ver4>=0;ver4--)
        abc[ver5++]=list[ver4];
    abc[ver5]=NULL;
    printf("The addition is=");
    puts(abc);

    int pace,loope=0;
    char lista[15],abcd[15];
    while(ver2!=0)
    {
        pace=ver2%16;
        if(pace>9)
            lista[loope++]=pace+55;
        else
            lista[loope++]=pace+48;
        ver2=ver2/16;       
    }
    int vere3,vere4,vere5=0;
    vere3=strlen(lista);
    vere3-=1;
    for(vere4=vere3;vere4>=0;vere4--)
        abcd[vere5++]=lista[vere4];
    abcd[vere5]=NULL;
    printf("The subtraction is=");
    puts(abcd);   
}                        