#include<stdio.h>
#include<math.h>
#include<string.h>
void binary(int);
void decimal(int);
void octal(int);
void hexadecimal(int);
int main()
{
    int ch,c,n,a;
    char y='y';
    while(y=='y'|| y=='Y')
    {
        printf("\n\n\t\t----WELLCOME TO MY BINARY,DECIMAL,OCTAL,HEXADECIMAL CALCULATOR----\n\n");
        printf("\n\n\t\t********************************MENU********************************\n\n");
        printf("\n\t\tPLEASE SELECT AN ACTION ->\n\n");
        printf("\n\t\tCONVERSION                    [1]");
        printf("\n\n\t\tADDITION AND SUBTRUCTION      [2]");
        printf("\n\n\t\tBINARY COMPLEMENT             [3]");
        printf("\n\n\n\t\t\t\t\tPLEASE ENTER YOUR CHOICE(1/2/3):");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                printf("\n\n\t\t********************WELLCOME IN CONVERSATION********************\n\n");
                printf("\n\t\tPLEASE SELECT AN ACTION ->\n\n");
                printf("\n\n\t\tBINARY CONVERSION             [1]");
                printf("\n\n\t\tDECIMAL CONVERSION            [2]");
                printf("\n\n\t\tOCTAL CONVERSION              [3]");
                printf("\n\n\t\tHEXADECIMAL CONVERSION        [4]");
                printf("\n\n\n\t\t\t\t\tPLEASE ENTER YOUR CHOICE(1/2/3/4):");
                scanf("%d",&c);
                switch (c)
                {
                    case 1: printf("\n\t\t********************WELLCOME TO BINARY CONVERSION********************");
                    printf("\n\n\n\t\tENTER BINARY NUMBER :");
                    scanf("%d",&n);
                    int c,j=0,b=0;
                    while(n!=0)
                    {
                        c=n%10;
                        n/=10;
                        b+=c*pow(2,j);
                        j++;
                    }
                    printf("\n\t\tTHE DECIMAL VALUE IS=%d",b);
                    octal(b);
                    hexadecimal(b);
                    break;

                    case 2: printf("\n\t\t********************WELLCOME TO DECIMAL CONVERSION********************");
                    printf("\n\n\n\t\tENTER DECIMAL NUMBER :");
                    scanf("%d",&n);
                    binary(n);
                    octal(n);
                    hexadecimal(n);
                    break;

                    case 3: printf("\n\t\t********************WELLCOME TO OCTAL CONVERSION********************");
                    printf("\n\n\n\t\tENTER OCTAL NUMBER :");
                    scanf("%d",&n);
                    int d=0,p=0,m=0;
                    while(n!=0)
                    {
                        p=n%10;
                        n/=10;
                        d+=p*pow(8,m);
                        m++;
                    }
                    printf("\n\t\tTHE DECIMAL VALUE IS=%d",d); 
                    binary(d);
                    hexadecimal(d);
                    break;

                    case 4: printf("\n\t\t********************WELLCOME TO HEXADECIMAL CONVERSION********************");
                    char h[20];
                    int len,dec,i=0;
                    int tdv=0;
                    printf("\n\n\n\t\tENTER HEXADECIMAL NUMBER :");
                    scanf("%s",&h);
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
                    printf("\n\t\tTHE DECIMAL VALUE IS=%d",tdv);
                    binary(tdv);
                    octal(tdv);
                    break;

                    default : printf("\n\n\t\tWRONG VALUE ENTERED");  
                }
                break;
            case 2:
                printf("\n\n\t\t********************WELLCOME IN ADDITION AND SUBTRUCTION********************\n\n");
                printf("\n\t\tPLEASE SELECT AN ACTION ->\n");
                printf("\n\n\t\tBINARY ADDITION AND SUBTRUCTION       [1]");
                printf("\n\n\t\tDECIMAL ADDITION AND SUBTRUCTION      [2]");
                printf("\n\n\t\tOCTAL ADDITION AND SUBTRUCTION        [3]");
                printf("\n\n\t\tHEXADECIMAL ADDITION AND SUBTRUCTION  [4]");
                printf("\n\n\n\t\t\t\t\tPLEASE ENTER YOUR CHOICE(1/2/3/4):");
                scanf("%d",&c);
                switch(c)
                {
                    case 1:printf("\n\t\t********************WELLCOME TO BINARY ADDITION AND SUBTRUCTION********************");
                        int x,z,k=0;
                        int n,b=0,c=0,i=0;
                        printf("\n\n\n\t\tINPUT FIRST BINARY NUMBER  || THEN PRESS ENTER :");
                        scanf("%d",&x);
                        printf("\n\t\tINPUT SECOND BINARY NUMBER  || THEN PRESS ENTER :");
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
                        printf("\n\t\tTHE ADDITION IS=");
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
                        printf("\n\t\tTHE SUBTRACTION IS=");
	                    for(ex=lo-1;ex>=0;ex--)
                        {
                            printf("%d",arr[ex]);
                        }
                        break;

                    case 2:printf("\n\t\t********************WELLCOME TO DECIMAL ADDITION AND SUBTRUCTION********************");
                        int w,qa,y,s;
                        printf("\n\n\n\t\tINPUT FIRST DECIMAL VALUE  || THEN PRESS ENTER :");
                        scanf("%d",&w);
                        printf("\n\t\tINPUT SECOND DECIMAL VALUE  || THEN PRESS ENTER :");
                        scanf("%d",&qa);
                        y=w+qa;
                        s=w-qa;
                        printf("\n\t\tTHE ADDITION IS=%d",y);
                        printf("\n\t\tTHE SUBTRACTION IS=%d",s);
                        break;

                    case 3:printf("\n\t\t********************WELLCOME TO OCTAL ADDITION AND SUBTRUCTION********************");
                        int xa,za,ka=0;
                        int na,o=0,ca=0,ia=0;
                        printf("\n\n\n\t\tINPUT FIRST OCTAL VALUE  || THEN PRESS ENTER :");
                        scanf("%d",&xa);
                        printf("\n\t\tINPUT SECOND OCTAL VALUE  || THEN PRESS ENTER :");
                        scanf("%d",&za);
                        while(xa!=0)
                        {
                            ca=xa%10;
                            xa/=10;
                            o+=ca*pow(8,ia);
                            ia++;
                        }
                        int ja=0;
                        while(za!=0)
                        {
                            na=za%10;
                            za/=10;
                            ka+=na*pow(8,ja);
                            ja++;
                        }
                        int ma,fa;
                        ma=o+ka;
                        fa=o-ka;
                        int aa[10],db=0,ec,pd;
	                    while(ma!=0)
	                    {
		                    pd=ma%8;
		                    aa[db++]=pd;
		                    ma/=8;
	                    }
                        printf("\n\t\tTHE ADDITION IS=");
	                    for(ec=db-1;ec>=0;ec--)
                        {
                            printf("%d",aa[ec]);
                        }
                        int arra[10],loa=0,exa,qb;
	                    while(fa!=0)
	                    {
		                    qb=fa%8;
		                    arra[loa++]=qb;
		                    fa/=8;
	                    }
                        printf("\n\t\tTHE SUBTRACTION IS=");
	                    for(exa=loa-1;exa>=0;exa--)
                        {
                            printf("%d",arra[exa]);
                        }
                        break;

                    case 4:printf("\n\t\t********************WELLCOME TO HEXADECIMAL ADDITION AND SUBTRUCTION********************");
                    char hex[20],he[20];
                    int le,rlen,decm,lu=0;
                    int tdva=0;
                    printf("\n\n\n\t\tINPUT FIRST HEXADECIMAL VALUE  || THEN PRESS ENTER :");
                    scanf("%s",&hex);
                    printf("\n\t\tINPUT SECOND HEXADECIMAL VALUE  || THEN PRESS ENTER :");
                    scanf("%s",&he);
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
                    printf("\n\t\tTHE ADDITION IS=");
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
                    printf("\n\t\tTHE SUBTRACTION IS=");
                    puts(abcd);
                    break;

                    default : printf("\n\n\t\tWRONG VALUE ENTERED");
                }
                break;
            case 3:printf("\n\n\t\t********************WELLCOME IN BINARY COMPLEMENT********************\n\n");
                printf("\n\t\t********************WELLCOME TO 1's AND 2's COMPLEMENT********************");
                int n;
                printf("\n\n\t\tENTER THE NUMBER OF BITS DO YOU WANT TO :"); 
                scanf("%d",&n);  
                char binary[n+1];   
                char onescomplement[n+1];   
                char twoscomplement[n+1];  
                int carry=1;
                printf("\n\t\tENTER THE BINARY NUMBER :");  
                scanf("%s", binary);
                printf("\n\t\tTHE 1's COMPLEMENT OF THE BINARY NUMBER IS :");
                for(int i=0;i<n;i++)  
                {  
                    if(binary[i]=='0')  
                        onescomplement[i]='1';  
                    else if(binary[i]=='1')  
                        onescomplement[i]='0';  
                }  
                onescomplement[n]='\0';  
                printf("%s",onescomplement);
                printf("\n\n\t\tTHE 2's COMPLEMENT OF THE BINARY NUMBER IS :");
                for(int i=n-1; i>=0; i--)  
                {  
                    if(onescomplement[i] == '1' && carry == 1)  
                    {  
                        twoscomplement[i] = '0';  
                    }  
                    else if(onescomplement[i] == '0' && carry == 1)  
                    {  
                        twoscomplement[i] = '1';  
                        carry = 0;  
                    }  
                    else  
                    {  
                        twoscomplement[i] = onescomplement[i];  
                    }  
                }  
                twoscomplement[n]='\0';  
                printf("%s",twoscomplement);
                break;    
        }
        printf("\n\n\n\n\t\t\t\tDO YOU WANT TO CONTINUE\n");
        printf("\n\t\t\t\tPRESS [Y] FOR YES\n");
        printf("\n\t\t\t\tPRESS [N] FOR NO\n");
        printf("\n\t\t\t\tPLEASE ENTER YOUR CHOICE(Y/N):");
		scanf("%s",&y);
    }
}
void binary(int n)
{
    int a[10],i=0,j,p;
    while(n!=0)
	{
		p=n%2;
		a[i++]=p;
		n/=2;
	}
    printf("\n\n\t\tTHE BINARY VALUE IS=");
	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);
	getc;
}
void octal(int n)
{
    int c,i=0;
    int o[10],j=0,k,p;
    while(n!=0)
    {
        p=n%8;
        o[j++]=p;
        n/=8;
    }
    printf("\n\n\t\tTHE OCTAL VALUE IS=");
    for(k=j-1;k>=0;k--)
    {
        printf("%d",o[k]);
    }
}
void hexadecimal(int n)
{
    int c=0,i=0,p;
    char h[15],g[15];
    int a[10],j=0;
    while(n!=0)
    {
        p=n%16;
        if(p>9)
        {
            h[j++]=p+55;
        }
        else
        {
            h[j++]=p+48;
        }
        n/=16;
    }
    int k=0,m,l=0;
    while(h[k]!=NULL)
    {
        k++;
    }
    k-=1;
    for(m=k;m>=0;m--)
    {
        g[l++]=h[m];
    }
    g[l]=NULL;
    printf("\n\n\t\tTHE HEXADECIMAL VALUE IS=");
    puts(g);
}