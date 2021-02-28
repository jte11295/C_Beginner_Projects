#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    typedef struct employee_info
    {
        char name[50];
        struct hireDate
        {
            int month;
            int day;
            int year;
        }hd;
        float salary;
    } EMPLOYEE_INFO_T;

    EMPLOYEE_INFO_T e1, e2;

    // Automatically Fill the 1st Employees information
    strcpy(e1.name, "Bill Gates");
    e1.hd.month = 10;
    e1.hd.day = 25; 
    e1.hd.year = 1978;
    e1.salary = 1000000000;
    
    // Now get the user to fill out employee 2's information
    printf("Please enter Employee 2's information\n");
    printf("Name: ");
    gets(e2.name);
    printf("Hire Month: ");
    scanf("%d", &e2.hd.month);
    printf("Hire Day: ");
    scanf("%d", &e2.hd.day);
    printf("Hire Year: ");
    scanf("%d", &e2.hd.year);
    printf("Salary: ");
    scanf("%f", &e2.salary);


    // Now print the Employees' Information
    printf("--------------Employee Roster-------------\n");
    printf("    Name           Hire Date                   Salary\n");
    printf("%s         %d-%d-%d               %.2f\n", e1.name, e1.hd.month, e1.hd.day, e1.hd.year, e1.salary);
    printf("%s         %d-%d-%d               %.2f\n", e2.name, e2.hd.month, e2.hd.day, e2.hd.year, e2.salary);
    printf("\n\nGoodbye!\n\n");
    
    return 0;
}
