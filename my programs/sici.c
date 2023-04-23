#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, CI,SI;


    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("\n Enter time: ");
    scanf("%f", &time);

    printf("\n Enter rate: ");
    scanf("%f", &rate);
    
    //calculating simple intrest
    SI=principle*rate*time/100;
    printf("\n Simple intrest=%f",SI);

    //calculating compound intrest
    CI = principle* (pow((1 + rate / 100), time));
    printf("\n Compound Interest = %f", CI);

    return 0;
}
 