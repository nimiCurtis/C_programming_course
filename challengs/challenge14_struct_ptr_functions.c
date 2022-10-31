/*
*Author: Nimrod Curtis
*Purpose: this program demonstrate strcut with ptrs and functions
*Date: 28.10.22
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount; // quantity * price
};

// declare functions
void readitem(struct item *itemptr);
void printitem(struct item *itemptr);

int main(void){
    struct item newitem;
    struct item *pitem;

    pitem = &newitem;

    pitem->itemName = (char*)malloc(20 * sizeof(char));
    
    if(!pitem) exit(-1); // do not forget it... important

    readitem(pitem);
    printitem(pitem);

    free(pitem->itemName); // do not forget it! .. important
    // the all data structure is freed when the program ends. so free just the itemName mem

    return 0;
}

void readitem(struct item *itemptr){

    printf("enter item details as follow.\n");
    printf("item name: \n");
    scanf("%s",itemptr->itemName);

    printf("quantity: \n");
    scanf("%d", &(itemptr->quantity));

    printf("price: \n");
    scanf("%f", & (itemptr->price));

    itemptr->amount = (float)(itemptr->price*itemptr->quantity);
}

void printitem(struct item *itemptr){

    printf("content of the item is: \n ");
    printf("item name: %s\n", itemptr->itemName);
    printf("quantity: %i \n", itemptr->quantity);
    printf("price: %.3f \n", itemptr->price);
    printf("total amount: %.3f \n", itemptr->amount);


}