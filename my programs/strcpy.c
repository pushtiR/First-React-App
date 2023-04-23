
#include<string.h>
#include<stdio.h>

int main()

{

char src[20]= {"Destination"};

char dest[20]= {""};

printf("\n source string is = %s", src);

printf("\n destination string is = %s", dest);

strcpy(dest, src);

printf ("\ntarget string after strcpy() = %s", dest);

return 0;

}
