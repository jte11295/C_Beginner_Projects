#include <stdio.h>

int main()
{
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company myComp1 = XEROX;
    enum Company myComp2 = GOOGLE;
    enum Company myComp3 = EBAY;

    printf("My companies are: \n");
    printf("Xerox: %i\n", myComp1);
    printf("Google: %i\n", myComp2);
    printf("Ebay: %i\n", myComp3);



    return 0;
}