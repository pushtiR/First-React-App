
#include<stdio.h>
#include<string.h>

struct student
{
    int rollnumber;
    char name[20];
    float marks;
};
struct student s1;
int main()
{
    s1.rollnumber=111;
strcpy(s1.name,"abc");
    s1.marks=75.5;
    printf("\n%d",s1.rollnumber);
    printf("\n%s",s1.name);
    printf("\n%.2f",s1.marks);
    return 0;

}