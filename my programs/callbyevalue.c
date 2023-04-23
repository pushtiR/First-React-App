
#include<stdio.h>
void swap(int a,int b);
void main()
{
    int a,b;
   a=10;
    b=20;
    printf("\n before swaping,the value of a and b is %d %d",a,b);
    swap(a,b);
     printf("\n after swaping,the value of a and b is %d %d",a,b);
getch();
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n after swaping,the value of a and b is:%d %d",a,b);
}
