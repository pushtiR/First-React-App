
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int length,copy,concat,reverse,compare;
    int choice;
     printf("enter the string s1");
    scanf("%s",&s1[100]);
    printf("enter the string s2");
    scanf("%s",&s2[100]);

    printf("press 1 for length,2 for copying, 3 for comparing,4 for reversing");
    scanf("%d",&choice);

    switch(choice)
    {
case 1:
    {
        length=strlen(s1);
    printf("\nthe length of the string s1 is %d",length);
    break;
    }
    case 2:
    {
    strcat(s1,s2);
    printf("\ncombing string s1 and s2 we get %s",s1);
    break;}
    
   
    case 3:
{
    compare=strcmp(s1,s2);
    printf("\non comparing string s1 and s2 we get %d",compare);
    break;
    }
     case 4:
    {
  strrev(s2);
    printf("\nthe reverse of the string s2 is %s",s2);
    break;}

    default:
    printf("invalid input");
    
    

}
}