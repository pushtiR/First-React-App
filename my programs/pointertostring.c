
#include<stdio.h>
int main()
{
    int i;
    char *s1[]={"abc","pqr","xyz"};

   while(i<3)
    {
        printf("%s",*s1[i]);
        printf("%p",s1[i]);
        i++;
    }
    return 0;
}