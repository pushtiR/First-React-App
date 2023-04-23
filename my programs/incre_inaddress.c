
#include<stdio.h>
int main()
{
    int *p;
    int a;
    a=10;
    p=&a;
    printf("before incrementing,the address of %d will be %p",*p,p);
    p=p+2;
    printf("\nafter incrementing by 2,the address will become %p",p);

}