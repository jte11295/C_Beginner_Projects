#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    FILE* pFile = NULL;
    int file_length;
    char filename[] = "file.txt";

    pFile = fopen(filename, "r");
    if(pFile == NULL)
    {
        perror("Error occured when opening the file: ");
        return (-1);
    }

    fseek(pFile, 0, SEEK_END);
    file_length = ftell(pFile) + 1;

    for(int i = file_length; i >= 0; i--)
    {
        printf("%c", fgetc(pFile));
        fseek(pFile, (i-file_length), SEEK_END);
    }
    
    
    fclose(pFile);
    pFile = NULL;

    return 0; 
}