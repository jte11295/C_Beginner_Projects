#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME_HOURS 40


int main()
{

    double hoursWorked = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("How many hours did you work this week? \n");
    scanf("%lf", &hoursWorked);

    // Calculate the gross pay
    if (hoursWorked > OVERTIME_HOURS)
    {
        int remainderHours = hoursWorked - OVERTIME_HOURS;
        double overtimePayRate = 1.5;
        grossPay = (OVERTIME_HOURS * PAYRATE) 
                    + (remainderHours * PAYRATE * overtimePayRate);
    }
    else{
        grossPay = hoursWorked * PAYRATE;
    }


    //Calculate the taxes
    if (grossPay > 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;

       
    }
    else if (grossPay < 450 && grossPay > 300)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay -300) * TAXRATE_150;
    }
    else 
    {
       taxes = grossPay * TAXRATE_300;
    }

    //Calculate the net pay
    netPay = grossPay - taxes;

    printf("Your gross pay this week is $%.2f\n", grossPay);
    printf("However, taxes suck, so you owe the man $%.2f\n", taxes);
    printf("Your actual net pay this week is $%.2f\n", netPay);

    return 0;
}