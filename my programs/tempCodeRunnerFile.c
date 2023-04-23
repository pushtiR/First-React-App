 
#include<stdio.h>
#include<conio.h>
int fact(int);
 void main()
{
    int a,z;
    clrscr();
    printf("enter the number whose factoial has to be calculated");
    scanf("%d",&a);
    z=fact(a);
    printf("\n the factorial of the number is: %d",z);
 
}
int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else if(a==1)
    {
        return 1;
    }
    else
    {

       return a*fact(a-1);
    }
}