#include <stdio.h>

int main(void)
{
    FILE *pFile = NULL;
    int ch;

    pFile = fopen("file.txt", "w+");
    if(pFile == NULL)
    {
        perror("There was an error:");
        return (-1);
    }

    // Prints the alphabet to a file
    for(ch = 65; ch <= 90; ch++)
    {
        fputc(ch, pFile);
    }

    fclose(pFile);
    pFile = NULL;

    pFile = fopen("file2.txt", "w+");
    if(pFile == NULL)
    {
        perror("There was an error:");
        return (-1);
    }

    char str[] = "Hello World!";

    // Writes a string to a new file
    fputs(str, pFile);

    fclose(pFile);
    pFile = NULL;

    pFile = fopen("file3.txt", "w+");
    if(pFile == NULL)
    {
        perror("There was an error:");
        return (-1);
    }

    // Write format specified string (like printf)
    fprintf(pFile, "Now I have made %d files!", 3);

    fclose(pFile);
    pFile = NULL;


    return 0;
}