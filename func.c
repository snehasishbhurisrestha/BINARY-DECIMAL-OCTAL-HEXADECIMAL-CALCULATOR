#include<stdio.h>
int x,y;
int addi(int,int);//when call the function. The function must be integer type.
int multi(int,int);
int divi(int,int);
int square(int);
int evenOdd(int);
int substracn(int,int);

int main()
{
   int choice;   

printf("***********************\n");
printf("\t\tCalculator\n");
printf("***********************\n");

printf("Enter a choice what you want to perform");
printf("\n\t1.Addition");
printf("\n\t2.Multiplication");
printf("\n\t3.Division");


printf("\n\t4.Square");
printf("\n\t5.Even or Odd");
printf("\n\t6.Substraction\n");
scanf("%d",&choice);



switch(choice)//switch case use when more than 2 options are there. Then it is the best 
{
case 1: printf("\n\tAddition");
        printf("\nEnter two no for addition");
        scanf("\n%d\t%d",&x,&y);
        addi(x,y);//function by passing paramenter
        break;//break the statement after the execution of the function definition

case 2: printf("Enter two no's for multiplication");//multiplication
        scanf("\n%d\t%d",&x,&y);
        multi(x,y);
        break;

case 3: printf("Enter two no's for division");
        scanf("%d%d",&x,&y);
        divi(x,y);
        break;


case 4: printf("Enter one no for square of no");
        scanf("%d",&x);
        square(x);
        break;

case 5: printf("Enter the no for even odd");
        scanf("%d",&x);
        evenOdd(x);
        break;

case 6: printf("Enter the two no's for Substraction");
        scanf("%d%d",&x,&y);
        subtracn(x,y);
        break;
default:
    printf("Enter a valid option");

}

getch();
}

int addi(int a,int b)
{
    int c;
    c=a+b;
    printf("sum of no %d + %d is: %d",a,b,c);

}

int multi(int a,int b)
{
    int c;
    c=a*b;
    printf("multiplication of no %d x %d is: %d",a,b,c);

}

int divi(int a,int b)
{
    int c;
    c=a/b;
    printf("division of no's is: %d",c);

}

int square(int a)
{
    int c;
    c=a*a;
    printf("square of no %d is: %d",a,c);

}

int evenOdd(int a)
{
    if(a%2==0)
    {
    printf("The no is even : %d",a);
    }
    else
    {
    printf("The no is odd : %d",a);    
    }

}
int subtracn(int a,int b)
{
    int c;
    c=a-b;
    printf("Substraction of no's is: %d",c);

}