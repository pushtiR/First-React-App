
#include<stdio.h>
int main()
{
    int *p;
    int a;
    a=10;
  
   p=&a;

    printf("\nprinting the value of a %d",*p);
    printf("\nprinting the address of a %p",p);
    return 0;
}