#include <stdio.h>

int gcd(int x, int y);
float absValue( float value);
float squareRoot(float value);

int main(void)
{
    char c;

    while (c != 'Q' || c != 'E')
    {
        printf("Type 'G' to use GCD function\n"); 
        printf("Type 'A' to use ABS function \n"); 
        printf("Type 'S' to use SQRT function \n"); 
        printf("Type 'Q' to quit \n");
        scanf("%c", &c);

        switch (c)
        {
            case 'G': // GCD Function
            {
                int x, y, greatest_common_divisor;
                printf("Enter a non-negtive integer: \n");
                scanf("%i", &x);
                printf("Enter a second non-negtive integer: \n");
                scanf("%i", &y);
                greatest_common_divisor = gcd(x, y);
                if(greatest_common_divisor != (-1))
                {
                    printf("The GCD of %i and %i is %i! \n \n \n", x, y, greatest_common_divisor);
                }
                break;
            }
            case 'A': // ABS Function
            {
                float x;
                printf("Enter any floating point number: \n");
                scanf("%f", &x);
                float y = absValue(x);
                printf("The absolute value of %.2f is %.2f \n \n \n", x, y);
                break;
            }
            case 'S': // SQRT Function
            {   
                float x;
                printf("Enter any positive floating point number: \n");
                scanf("%f", &x);
                float y = squareRoot(x);
                if (y != (-1.0))
                {
                    printf("The square root of %.2f is %.2f \n \n \n", x, y);
                }
                break;
            }
            case 'Q' : // QUIT
            {  
               printf("Goodbye!"); 
               break;
            }
            default:
            {
                printf("Not a valid character\n");
            }
        }
    }


    return 0;

}

/*
* Name: gcd() - Greatest Common Denominator
* Purpose: finds the greatest common denominator of two non-negative integers values
* Parameters: x - Non-negative integer #1
*             y - Non-negative integer #2
*/
int gcd(int x, int y)
{
    if ( ( x < 0) || (y < 0))
    {
        printf("Values must be positive numbers!\n \n \n");
        return (-1);
    }

    int gcf_value;
    int remainder; 
    int a;
    int b;

    //This is based on the Eculidian Algorithm for Greatest Common Divisor (GCD)
    if (x == y)
    {
        return x;
    }
    else if (x > y)
    {
        a = x;
        b = y;
    }
    else
    {
        a = y;
        b = x;
    }

    while( (a % b) > 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return b;
    
}

/*
* Name: absValue() - Absolute Value
* Purpose: Finds the absolute value of any given float
* Parameters: value - the number to calculate the absolute value of
*/
float absValue(float value)
{
    if (value > 0)
    {
        return value;
    }
    else
    {
        return (-value);
    }
}

/*
* Name: squareRoot() - Square Root
* Purpose: Finds the square root of a given value
* Parameters: value - the number to calculate the square root of
*/
float squareRoot(float value)
{
    if (value < 0)
    {
        printf("Value should be a positive number!\n \n \n");
        return (-1);
    }
    else
    {
        const float epsilon = 0.00001;
        float guess = 1.0;
        while (absValue((guess * guess) - value ) >= epsilon)
        {
            guess = ( (value / guess) + guess) / 2.0;
        }
        return guess;
    }
}
