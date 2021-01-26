#include <stdio.h>

int main()
{
    printf("For this system...\n");
    printf("The byte size of an char is %U \n", sizeof(char));
    printf("The byte size of an short is %U \n", sizeof(short));
    printf("The byte size of an int is %U \n", sizeof(int));
    printf("The byte size of an long is %U \n", sizeof(long));
    printf("The byte size of an long long is %U \n", sizeof(long long));
    printf("The byte size of an float is %U \n", sizeof(float));
    printf("The byte size of an double is %U \n", sizeof(double));
    printf("The byte size of an long double is %U \n", sizeof(long double));

    return 0;
}