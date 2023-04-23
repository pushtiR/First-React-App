
#include<stdio.h>
int main()
{
  int h,m,s,minute;
  float hr;
    
    printf("enter hours:");
    scanf("%d",&h);
    m=h*60;
    printf("\n hours into minutes:%d",m);
    s=m*60;
    printf("\n minutes into seconds:%d",s);
    printf("\n hours:minutes:seconds:%d:%d:%d",h,m,s);
    printf("\n enter minutes:");
    scanf("%d",&minute);
    hr=minute/(float)60;
    printf("minutes into hours:%f",hr);

   
}