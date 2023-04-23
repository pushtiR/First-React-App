
#include <stdio.h>
void main()
{
    int yearcheck, datecheck, month, monthcheck, daysgap, i, count = 0, mday = 0, error;

    printf("enter the date to be checked in dd/mm/yyyy");
    scanf("%d %d %d", &datecheck, &monthcheck, &yearcheck);
    if (yearcheck >= 2000)
    {
        for (i = 2000; i < yearcheck; i++)
        {
            if (i % 4 == 0)
            {
                count = count + 366;
            }
            else
            {
                count = count + 365;
            }
        }
    }
    else
    {
        for (i =yearcheck; i<2000; i++)
        {
            if (i% 4 == 0)
            {
                count = count + 366;
            }
            else
            {
                count = count + 365;
            }
        }
    }
    if (yearcheck >= 2000)
    {
        for (i = 1; i < monthcheck; i++)
        {
            if (i == 01 || i == 03 || i == 05 || i == 07 || i == 8 || i == 10 || i == 12)
                mday = mday + 31;

            else if (i == 02)
            {
                if (yearcheck % 4 == 0)
                    mday = mday + 29;
                else
                    mday = mday + 28;
            }
            else

                mday = mday + 30;
        }
    }

    else
    {
        {
            for (i = 1; i <monthcheck; i++)
            {
                if (i == 01 || i == 03 || i == 05 || i == 07 || i == 8 || i == 10 || i == 12)
                    mday = mday + 31;

                else if (i == 02)
                {
                    if (yearcheck % 4 == 0)
                        mday = mday + 29;
                    else
                        mday = mday + 28;
                }
                else

                    mday = mday + 30;
            }
        }
    }
   // printf("yeardays=%d and monthdays=%d", count, mday);
    if(yearcheck>=2000)
    {
    daysgap = count + mday + (datecheck-1);
    
    }
    else{

       /*  if(monthcheck==01||monthcheck==03||monthcheck==05||monthcheck==07||monthcheck==8||monthcheck==10||monthcheck==12)
         {
            daysgap=count-mday+(31-datecheck-1);
         }
         else if(monthcheck==02)
         {
            if(yearcheck%4==0)
            {daysgap=count-mday+(29-datecheck-1);}
            else{daysgap=count-mday+(28-datecheck-1);}
         }
         else
         {
            daysgap=count-mday+(30-datecheck-1);
         }*/
         daysgap=count- mday+(datecheck);
    }
//printf("daysgap=%d",daysgap);
    // january 1st 2000 saturday
    if(daysgap<=7)
    {
    if(datecheck==01)
    printf("saturday");
 if(datecheck==02)
    printf("sunday");
 if(datecheck==03)
    printf("monday");
 if(datecheck==04)
    printf("tuesday");
 if(datecheck==05)
    printf("wednesday");
 if(datecheck==06)
    printf("thursday");
     if(datecheck==07)
    printf("friday");
    }
    error = daysgap % 7;

    switch (error)
    {

    case 1:
    {
        if (error == 0)
            printf("saturday");
    }
    case 2:
    {
        if (error == 1)
            printf("sunday");
    }

    case 3:
    {
        if (error == 2)
            printf("monday");
    }

    case 4:
    {
        if (error == 3)
            printf("tuesday");
    }

    case 5:
    {
        if (error == 4)
            printf("wednesday");
    }

    case 6:
    {
        if (error == 5)
            printf("thursday");
    }

    case 7:
    {
        if (error == 6)
            printf("friday");
    }
    }
}
