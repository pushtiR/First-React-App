
//conversions related programs dollars into rs where 1 doll=48rs grams to kgs kilobytes to megabytes
#include<stdio.h>
int main()
{
    //conversion of dollar into rupee
    float rs,dollar;
    printf("Enter the amount of dollars:");
    scanf("%f",&dollar);
    rs=48*dollar;
    printf("\n conversion of entered amount to rupees:%f",rs);

    //conversion of rupees into dollar
    printf("\n Enter the amount of rupees:");
    scanf("%f",&rs);
    dollar=rs/(float)48;
    printf("\n conversion of entered amount into dollars:%f",dollar);

    //grams to kilograms
    double kgs;
    int grams;
    printf("\n enter grams:");
    scanf("%d",&grams);
    kgs=grams/(double)1000;
    printf("\n the weight in kilograms is:%lf",kgs);

    //kilobytes to megabytes
    double MB,KB;
     printf("\n enter kilobytes:");
    scanf("%lf",&KB);
    MB=KB/(float)1024;
    printf("\n The conversion of kilobytes to megabytes is as:");
    printf("\n %lf KB = %lf MB",KB,MB);
}