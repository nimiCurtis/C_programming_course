/*
*Author: Nimrod Curtis
*Purpose: create intiialize assign and access a pointer 
*Date: 01.10.22
*/

#include <stdio.h>
#include <stddef.h>

int main(){

    int number = 11;
    int *pnumber = NULL;

    pnumber = &number;
    
    printf("address of the pointer is: %p\n", (void*)&pnumber);
    printf("value of the pointer is: %p\n", pnumber);
    printf("value of the pointer is pointing to is: %d\n", *pnumber);

    return 0;
}