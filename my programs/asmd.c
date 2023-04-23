 
 #include<stdio.h>
 int main()
 {
    int a,s,m,num1,num2;
    float d;
    printf("\nenter first number:");
    scanf("%d",&num1);
    printf("\nenter second number:");
    scanf("%d",&num2);
    a=num1+num2;
    printf("\nthe addition of two numbers is:%d",a);
    s=num1-num2;
    printf("\nthe subtraction of two numbers is:%d",s);
    m=num1*num2;
    printf("\nthe multiplication of two numbers is:%d",m);
    d=num1/(float)num2;
    printf("\nthe division of two numbers is:%f",d);


 }