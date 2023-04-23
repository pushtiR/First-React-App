
#include<stdio.h>
#include<string.h>

int main()

{

char str1[]={"copy"};

char str2[]={"Trophy"};

int i;
i=strcmp(str1,str2);
if(i==0)
printf("\nboth the strings are equal");
else
printf("\nboth the strings are not equal");
return 0;

}

