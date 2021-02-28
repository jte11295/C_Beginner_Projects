/********************************
 * Purpose: To practice using pointers to pass by reference
 * 
 * 
********************************/



#include <stdlib.h>
#include <stdio.h>

/*************Function Prototypes****************/
void square(float *f);
/************************************************/

int main(void)
{
    float number = 2.37;

    square(&number);
    printf("The square is %4.4f\n", number);


    return 0;
}


/*
    Function Name: square() 
    Purpose: Squares a given input  
    Parameters: float* f - a pointer to a float value which we'll store the result in (pass by reference)
    Return: void

*/
void square(float *f)
{
    *f = (*f) * (*f);

}