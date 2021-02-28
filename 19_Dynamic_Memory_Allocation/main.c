/************************************
 * Purpose: To utilize the Dynamic Memory Allocation Functions
 * 
 * 
 ***********************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
    char* p_user_response = NULL;

    int num_of_bytes = 0;
    printf("Please enter the number of bytes you would like allocated: ");
    scanf("%d", &num_of_bytes);

    p_user_response = (char*)malloc(num_of_bytes * sizeof(char));
    if (p_user_response == NULL)
    {
        printf("Error you are out of memory!");
        return 0;
    }

    printf("Now enter a string you would like stored in memory:");
    scanf(" "); //This is the easiest way to debounce the return key......SOOOO easy
    gets(p_user_response);

    printf("\nProcessing... \n\nProcessing... \n\nProcessing... \n\n");
    printf("The string you entered was: \n%s\n", p_user_response);
    printf("\nYou used %d of %d bytes allocated to you!\n\n\nGoodbye!\n", strlen(p_user_response), num_of_bytes);


    free(p_user_response); // NEVER forget to free up allocated memory once you are no longer done with it 
    return 0;
}

