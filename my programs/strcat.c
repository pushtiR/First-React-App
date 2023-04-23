
#include<stdio.h>
#include<string.h>

int main()

{

char src[20]= {'b','e','f','o','r','e'};

char dest[20]={'a','f','t','e','r'};

strcat(dest, src);

puts(dest);

return 0;

}