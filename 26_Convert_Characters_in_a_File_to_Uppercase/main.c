/*
    This project takes a .txt file, converts it to uppercase in a temp file, and then swaps the old file with the new one

*/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE* pFile, *pFile_temp = NULL;
    int c;
    char filename[] = "file.txt";
    char filename_temp[] = "temp.txt";

    pFile = fopen(filename, "r");
    pFile_temp = fopen(filename_temp, "w");
    if(pFile == NULL || pFile_temp == NULL)
    {
        perror("Error occurred when trying to open file: ");
        return (-1);
    }

    while((c = fgetc(pFile)) != EOF)
    {
        if(islower((char)c))
        {
            // Convert to uppercase if character is lower case
            fputc((char)(c - 32), pFile_temp);
        }
        else
        {
            // Else, just copy the character to the temp file
            fputc((char)c, pFile_temp);
        }
    }

    fclose(pFile);
    fclose(pFile_temp);
    pFile = NULL;
    pFile_temp = NULL;  

    remove(filename);
    rename(filename_temp, filename);
    return 0;
}