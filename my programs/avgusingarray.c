
#include<stdio.h>
int main()
{int n,i;
float num[100],sum=0.0,avg;
printf("enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the number");
    scanf("%f",&num[i]);
    sum=sum+num[i];
}
avg=sum/n;
printf("%f",avg);
return 0;
}