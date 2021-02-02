/*
    Challenge: Use common string.h library functions
   
    Function 1) Displays a string in reverse order
    - Should read input from keyboard
    - Need to use strlen string function

    Function 2) Sorts the strings of an array using a bubble sort
    - Needs to use strcmp and strcpy functions

*/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void reverse_str(char str[]);
void bubble_sort(int num);

int main()
{
    // 1
    char my_str[100];
    printf("--------------------------------------------------\n");
    printf("Please enter any string under 100 characters that you would like reverse-ified: \n");
    scanf("%[^\n]*c", my_str);
    printf("--------------------------------------------------\n");
    reverse_str(my_str);

    // 2
    int num;
    printf("--------------------------------------------------\n");
    printf("This is an example of how Bubble Sort Works!\n");
    printf("--------------------------------------------------\n");
    printf("Please enter the number of names you would like to sort: ");
    scanf("%d", &num);
    bubble_sort(num);





    return 0;
}

/*  
    Function Name: reverse_str
    Purpose: To take an input string and print it backwards
    Input: str - the string to be print in reverse
    Output: void
*/

void reverse_str(char str[])
{
    char rev_str[100];
    int str_length = strlen(str);

    for(int i = 0; i < str_length; i++)
    {
        rev_str[i] = str[(str_length - 1) - i];
    }

    printf("The reverse-ified string is: %s! \n", rev_str);
}

/*  
    Function Name: bubble_sort
    Purpose: To sort a list of names provided by the user in alphabetical order
    Input: num - the number of names the user would like to sort
    Output: void
*/
void bubble_sort(int num)
{
    char name_array[num][50];
    char tmp[50];
    printf("Please only use names under 50 characters to avoid buffer overflow!\n");

    // First, get the names from the user
    for(int i = 0; i < num; i++)
    {
        printf("Please enter name %i: ", i+1);
        scanf("%s", name_array[i]);
    }

    // Now we begin sorting the provided names
    for(int i = 1; i <= num; i++)
    {
        for (int j = 0; j <= num-1; j++)
        {
            if (strcmp(name_array[j], name_array[j+1]) > 0)  
            {
                strncpy(tmp, name_array[j], sizeof(tmp)-1);
                strncpy(name_array[j], name_array[j+1], sizeof(name_array[j])-1);
                strncpy(name_array[j+1], tmp, sizeof(name_array[j]+1)-1);
            }
        }
    }

    // Lastly, print the organized list
    printf("\n Here is the organized list: \n");
    printf("--------------------------------------------------\n");
    for(int i = 0; i < num; i++)
    {
        printf("%s \n", name_array[i]);
    }

}
