#include <stdio.h>
#include <math.h>


int main()
{
    double width;
    double length;
    double perimeter;
    double area;

    printf("Please enter your width: ");
    scanf("%lf", &width);
    printf("Please enter your length: ");
    scanf("%lf", &length);

    printf("\n");

    perimeter = (2 * width) + (2 * length);
    area = width * length;

    printf ("Your Rectangle \n-----------\nPerimeter is: %lf\nArea is %lf\n", perimeter, area);
    //printf ("Your rectangle's area is: %lf\n", area);

    return 0;
}