
#include<stdio.h>
#include<conio.h>
int main()

{

    int r,c,i,j,k,a[10][10],b[10][10],p[10][10];
   

    printf("enter the numbers of rows and columns:");
scanf("%d%d",&r,&c);
printf("enter the first array:");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {scanf("%d",&a[i][j]);
    }

}
printf("enter the second array:");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
{
    scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{
    p[i][j]=0;
    for(k=0;k<c;k++)
    {
        p[i][j]=p[i][j]+a[i][k]*b[k][j];

    }
}
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("\n %d",p[i][j]);

    }

}
}


