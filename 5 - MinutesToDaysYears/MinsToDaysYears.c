#include <stdio.h>

int main()
{
    int minutes = 0;
    double days = 0;
    double years = 0;

    int mins_per_day = 24 * 60;
    int mins_per_year = 365 * mins_per_day;
    

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    int num_of_years  = (minutes / mins_per_year);
    int remainder_days  = minutes % mins_per_year;
    int num_of_days = (remainder_days / mins_per_day);
    int remainder_mins = remainder_days % mins_per_day;

    printf("Wow, that's %d years, %d days, and %d mins!", num_of_years, num_of_days, remainder_mins);

    return 0;

}