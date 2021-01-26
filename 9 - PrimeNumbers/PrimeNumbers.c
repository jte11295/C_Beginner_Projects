#include "stdio.h"

#define MAX_NUMBER 100


int main()
{
    int primes[MAX_NUMBER] = {[0] = 1, [1] = 2, [2] = 3}; // Initialize and include 1, 2 and 3 as prime numbers

    int count = 2; // To keep track of the number of prime numbers when printing

    for (int i = 4; i <= MAX_NUMBER; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (i % primes[j] == 0)
            {
                break;
            }
            else if (j == count)
            { 
                count++;
                primes[count] = i;
            }
            
        }
    }

    printf("There are %i prime numbers between 1 and %i! \n", count+1, MAX_NUMBER);

    for(int k = 0; k <= count; k++)
    {
        printf("%i ", primes[k]);
    }


    return 0;
}