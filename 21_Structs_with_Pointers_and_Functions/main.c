#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct item
{
    char* item_name;
    int quantity;
    float price_per_item; 
    float total_cost;
} ITEM_INFO_T;

void readItem(ITEM_INFO_T *pItem);
void printItem(ITEM_INFO_T *pItem);


int main (void)
{
    // Initialize
    ITEM_INFO_T my_item, *pItem;
    pItem = &my_item;
    pItem->item_name = (char *) malloc(30* sizeof(char));
    if(!pItem)
    {
        return 1;
    }

    readItem(pItem);
    printItem(pItem);

    return 0; 
}

//Purpose: Get info from user and stuff into point to ITEM_INFO_T struct
void readItem(ITEM_INFO_T *pItem)
{
    printf("Please Enter Item Name: ");
    gets(pItem->item_name);
    printf("How many would you like to buy? ");
    scanf("%d", &pItem->quantity);
    printf("How much does each one cost? ");
    scanf("%f", &pItem->price_per_item);
    pItem->total_cost = (float)(pItem->quantity) * (pItem->price_per_item);  
}

//Purpose: Prints the contents of an ITEM_INFO_T struct by using pointer
void printItem(ITEM_INFO_T *pItem)
{
    printf("\n\nYou bought %d %s(s) for %.2f each.\n", 
                    pItem->quantity,
                    pItem->item_name,
                    pItem->price_per_item);
    printf("Your Total is: %.2f\n", pItem->total_cost);
    printf("Thanks for shopping at Buster's Barn. Goodbye! \n\n");
}