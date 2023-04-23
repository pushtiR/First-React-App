
#include<stdio.h>

#include<string.h>

int main()

{

char temp[20]={"Reverse"};

printf("String before reversing is : %s\n", temp);

printf("String after strrev() :%s", strrev(temp));

return 0;
}