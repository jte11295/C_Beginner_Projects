#include <stdio.h>
#include <string.h>

int main(void)
{
    char multiple[] = "a string";       // Remember, the compiler will automatically allocate the memory if initialized this way
    char *p = multiple;                 // Could also set = &multiple[0]

    for(int i =0; i < strlen(multiple); i++)
    {
        printf("multiple[%d] = %c | *(p+%d) = %c | &multiple[%d] = %p | p+%d = %p\n",
        i,
        multiple[i],
        i,
        *(p+i),
        i,
        &multiple[i],
        i,
        p+i
        );
    }
    printf("\n \n \n");
    

    long array[] = {15L, 25L, 35L, 45L};
    long *p_long = array;
    for(int i =0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        printf("array[%d] = %d | *(p+%d) = %d | &array[%d] = %llu | p+%d = %llu\n",
        i,
        array[i],
        i,
        *(p_long+i),
        i,
        &array[i],
        i,
        p_long+i
        );
    }
    printf("\n        Type long occupies: %d bytes\n\n\n", (int)sizeof(long));


    return 0;
}