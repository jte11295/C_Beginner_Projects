#include <stdio.h>

int main(void)
{
    FILE* pFile = NULL;
    int length = 0;
    char filename[] = "file.txt";

    pFile = fopen(filename, "r");
    if(pFile == NULL)
    {
        perror ("Error ocurred: ");
        return (-1);
    }

    fseek(pFile, 0, SEEK_END); // This function puts the pointer to the end of the file

    length = ftell(pFile); // This tells us where we are in the file (Current Address - Base Address). In this case it points to the end. 
    fclose(pFile);

    printf("The size of %s is %d bytes", filename, length);
    return 0;
}