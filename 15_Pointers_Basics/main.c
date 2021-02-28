
#include <stdlib.h>
#include <stdio.h>

#define BITS_PER_BYTE 8

int main ()
{

    int number = 12;
    int * pNum = NULL;

    pNum = &number;

    printf("The value of number = %i\n", number);
    printf("The value pointer pNum is pointing to: %i\n", *pNum);
    printf("The address of number: %p\n", &number);
    printf("The address pNum is pointing to: %p\n", pNum);
    printf("The address of pNum pointer in memory: %p\n", (void*)&pNum);

    int pointer_size = (int)sizeof(pNum); // bytes
    int OS_bits = pointer_size * BITS_PER_BYTE; // bits
    printf("The size of pointer pNum: %d bytes meaning you have a %d-bit operating system!\n", pointer_size , OS_bits);

    int my_int_array[5] = {56, 234, 27, 547, 83};
    char my_char_array[5] = {'A', 'J', '9', '`', '='};
    float my_float_array[5] = {3.14, 9.81, 10.0001, 42.00, 1.010101};

    for(int i = 0; i < 5; i++)
    {
        int *pint = &my_int_array[i];
        printf("The %d element of the int array is %d and is stored at address %p\n", i, *pint, pint);
        // char *pchar = &my_char_array[i];
        // printf("The %d element of the char array is %c and is stored at address %p\n", i, *pchar, pchar);
        // float *pfloat = &my_float_array[i];
        // printf("The %d element of the float array is %f and is stored at address %p\n", i, *pfloat, pfloat);
    }

    return 0;
}