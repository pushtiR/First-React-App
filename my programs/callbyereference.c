
#include<stdio.h>
#include<conio.h>
int swap(int*a,int*b);
void main()
{
int a,b;
a=10;b=20;
printf("\n before swaping,the values of a and b are:%d %d",a,b);
swap(&a,&b);
printf("\n after swaping the values of a and b are:%d %d",a,b);
getch();

}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n after swaping the values of a and b are:%d %d",*a,*b);
}