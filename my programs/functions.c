
#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
void main()
{
    int x,y,z;
    printf("enter the numbers:",x,y);
    scanf("%d%d",&x,&y);
    z=sum(x,y);
    getch();


}
int sum(int a,int b)
{
    int c;
c=a+b;
printf("the output is=%d",c);
}