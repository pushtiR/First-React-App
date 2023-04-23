
#include<stdio.h>
int main()
{
    int i,sum;
    int element[100];
     element[0]=0;
        element[1]=1;
         printf("%d\n %d",element[0],element[1]);
    for(i=2;i<10;i++)
    {
        
        element[i]=element[i-2]+element[i-1];
        printf("\n%d",element[i]);
    }
return 0;
}