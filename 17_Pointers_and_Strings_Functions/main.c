#include "stdio.h"
#include "stdlib.h"

/*----------- Function Prototypes -------------------*/
void StringCopy(char* to, char* from);
int StringCounter (char* p);
/*---------------------------------------------------*/

int main(void)
{
    char string1[] = "This is my awesome string";
    char string2[50];

    StringCopy(string2, string1);
    printf("%s\n", string2);
    printf("New string has %d characters!\n", StringCounter(string2));

    printf("%d\n", StringCounter("This is a test"));
    printf("%d\n", StringCounter(""));
    printf("%d\n", StringCounter("Jared"));

    return 0;
}


/*
    Function Name: StringCopy()
    Purpose: To copy one string to another using pointers
    Parameters: char* to, char* from
    Return: void
*/
void StringCopy(char* to, char* from)
{
    while(*from) // Loop will continue so long as dereferenced character is not NULL
    {
        *to++ = *from++;
    }

    *to = '\0'; // don't forget to terminate string will NULL Character
}


/*
    Function Name: StringCounter()
    Purpose: To counter the number of characters in a string using pointers
    Parameters: char* p
    Return: int - number of characters
*/
int StringCounter (char* p)
{
    int counter = 0;

    while(*p) // Loop will continue so long as dereferenced character is not NULL
    {
        counter++;
        *p++;
    }

    return counter;
}
