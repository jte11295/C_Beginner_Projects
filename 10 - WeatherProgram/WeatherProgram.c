
#include <stdio.h>

#define MONTHS_PER_YEAR 12
#define YEARS_OF_INFO   5


int main()
{


    float rain_per_month[YEARS_OF_INFO][MONTHS_PER_YEAR] = 
        {   /*        Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec
            /*2016*/{1.08, 3.23, 4.17, 2.15, 3.00, 5.22, 2.49, 5.29, 3.83, 3.11, 0.94, 3.11},
            /*2017*/{2.78, 4.23, 3.23, 2.45, 3.23, 2.35, 1.02, 3.56, 4.50, 2.69, 3.23, 4.01},
            /*2018*/{3.56, 4.26, 5.36, 3.02, 5.00, 3.76, 2.32, 4.20, 3.56, 3.54, 2.22, 3.89},
            /*2019*/{4.23, 3.60, 4.12, 2.76, 4.10, 3.01, 1.98, 5.23, 2.98, 4.01, 1.89, 3.12},
            /*2020*/{3.50, 4.89, 3.65, 2.35, 4.45, 3.56, 1.76, 3.56, 3.23, 3.64, 4.10, 5.98}


        };

    float avg_rain_per_year[YEARS_OF_INFO];
    float sum_of_yearly_avg   = 0;
    float yearly_avg_rain       = 0;
    float avg_rain_per_month[MONTHS_PER_YEAR];
    int year = 2016;

    printf("YEAR    RAINFALL(in)\n");
    // Nested Loop 1: Calculate the avg rain per year
    for (int i = 0; i < YEARS_OF_INFO; i++)
    {
        for (int j = 0; j < MONTHS_PER_YEAR; j++)
        {
            avg_rain_per_year[i] += rain_per_month[i][j];
        }

        sum_of_yearly_avg += avg_rain_per_year[i];
        printf("%i    %f\n", year, avg_rain_per_year[i]);
        year++;
    }

    printf("\nThe average rainfall per year was: %f inches\n\n", (sum_of_yearly_avg/YEARS_OF_INFO));


    // Nester Loop 2: Calculate the avg rain per month
    printf("MONTH #     RAINFALL(in)\n");
    for (int i = 0; i < MONTHS_PER_YEAR; i++)
    {
        for (int j = 0; j < YEARS_OF_INFO; j++)
        {
            avg_rain_per_month[i] += rain_per_month[j][i];
        }

        printf("    %i          %f\n", i+1, (avg_rain_per_month[i]/YEARS_OF_INFO));
    }



    return 0;
}