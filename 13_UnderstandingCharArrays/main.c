/* 
* Pupose of this code is to test understanding of char arrays (i.e. strings) and the string.h library
*
* - Write a function to count number of characters in a string (do NOT use strlen() )
*   - Function should take a character array as a parameter and return a int indicating the length
*
* - Write a function to concatenate two strings (do NOT use strcat() )
*   - Function should take 3 parameters char result [], const char str1[], const char str2[], return void
*
* - Write a function to determine if two strings are equal (do NOT use strcmp() )
*   - Function should take two const char arrays as parameters and return a Boolean of true if they are equal and false otherwise
*   - Should probably look for null terminator to determine when the strings end
*
*/

#include <stdbool.h>
#include <string.h>
#include <stdio.h>

int stringLength(const char str[]);
char stringConcatenate(char result[], const char str1[], const char str2[]);
bool stringCompare(const char str1[], const char str2[]);

int main()
{
    // 1
    char my_string[101];
    printf("Please enter a string under 100 characters: ");
    scanf("%[^\n]*c", my_string);
    printf("The size of \"%s\" is %d characters!\n", my_string, stringLength(my_string));


    // 2
    char con[] = "This is my"; 
    char cat[] = " awesome concatenated string!";
    char result[100];
    stringConcatenate(result, con, cat);
    printf("The concatenated string is: %s\n", result);

    // 3
    char name1[] = "Jared";
    char name2[] = "Jarod";
    if (stringCompare(name1, name2))
    {
        printf("The names are the same!\n");
    }
    else
    {
        printf("The two names are different\n");
    }

    return 0;
}

int stringLength(const char str[])
{
    int cnt = 0;
    while (str[cnt] != '\0')
    { 
        cnt++;
    }
    
    return cnt; 
}

char stringConcatenate(char result[], const char str1[], const char str2[])
{
    int str1_length = stringLength(str1);
    int str2_length = stringLength(str2);
    int total_length = str1_length + str2_length;
    for(int i = 0; i < total_length; i++)
    {
        if(i < str1_length)
        {
            if (str1[i] != '\0')
            {
                result[i] = str1[i];
            }
        }
        else
        {
            if (str2[i - (str1_length)] != '\0')
            {
                result[i] = str2[i - (str1_length)];
            }
        }
    }

}

bool stringCompare(const char str1[], const char str2[])
{
    bool compare = true;
    int str1_length = stringLength(str1);
    int str2_length = stringLength(str2);
    if(str1_length == str2_length)
    {
        for(int i = 0; i < str1_length; i++)
        {
            if(str1[i] != str2[i])
            {
                compare = false;
                break;
            }
        }
    }
    else
    {
        compare = false;
    }
    

    return compare;
}