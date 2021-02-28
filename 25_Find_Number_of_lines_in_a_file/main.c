#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    FILE* pFile = NULL;
    int num_of_lines = 0;
    int c = 0;
    char filename[] = "file.txt";

    pFile = fopen(filename, "r");
    if(pFile == NULL)
    {
        perror("Error occrured when opening file: \n");
        return (-1);
    }
    else
    {
        num_of_lines = 1; // Doing this to 1 index the count so long as file opens correctly
    }


    while( (c = fgetc(pFile)) != EOF)
    {
        if ( (char)c == '\n')
        {
            num_of_lines++;
        }
    }

    fclose(pFile);
    pFile = NULL;
    printf("The are %d lines of text in %s", num_of_lines, filename);


    return 0;
}