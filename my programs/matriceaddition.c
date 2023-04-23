
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],h[10][10];
    int c,r,i,j;
    printf("enter the numbers of rows and columns:");
    scanf("%d%d",&r,&c);
    printf("\n enter the first array");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    
    printf("\n enter the second array");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
    }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        h[i][j]=a[i][j]+b[i][j];
    }
    }
    printf("\n the addition of two matrices");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        printf("\n %d",h[i][j]);
    }
    }

}