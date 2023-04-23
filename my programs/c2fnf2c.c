
//convert celcius into fahrenheit. F=(9/5*c)+32 and fahrenheit into celcius C=5/9*(F-32)
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

//coversion of celsius to fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("coversion of celsius to fahrenheit is as:");
    printf("\n %.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

//conversion of fahrenheit to celsius
   printf("\n Enter temperature in Fahrenheit:");
   scanf("%f",&fahrenheit);
   celsius = (fahrenheit - 32)*5/9;
   printf("conversion of fahrenheit to celsius is as:");
   printf("\n %.2f fahrenheit = %.2f celsius", fahrenheit, celsius);
   return 0;
}
