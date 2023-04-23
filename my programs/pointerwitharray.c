
#include<stdio.h>

void main()
{
    int a[3]={129,289,321};
    int *ptr;
    int i;

    for(i=0;i<3;i++)
    {
        ptr=&a[i];
       //printing the address and value by pointer
        printf("\naddress by pointer %p",ptr);
        printf("\nvalue by pointer %d",*ptr);
        //printing the address and value without the use of pointer
        printf("\naddress without pointer %p ",&a[i]);
        printf("\n value without pointer %d ",a[i]);

    }
}