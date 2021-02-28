#include <stdio.h>

int main(void)
{
    char filename[] =  "file.txt";
    FILE *pFile = NULL;
    int c;
    char str[50]; 


    pFile = fopen(filename, "r");

    // Check if file opened correctly and/or if it exists
    if(pFile == NULL)
    {
        perror("Erorr has occured");
        return (-1);
    }

    // Print contents of file into terminal one character at a time
    while((c=fgetc(pFile)) != EOF)
    {
        printf("%c", c);
    }

    rewind(pFile); // Need to restart pointer at beginning of file

    // Print contents of file into terminal, this time using a string
    if(fgets(str, 49, pFile) != NULL)
    {
        printf("\n%s\n", str);
    }

    // Always close file and set pointer to NULL when done with file
    fclose(pFile);
    pFile = NULL;

    return 0;
}