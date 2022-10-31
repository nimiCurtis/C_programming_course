/*
*Author: Nimrod Curtis
*Purpose: write a function which square a number by itself using pass by reference.
*Date: 07.10.22
*/

#include <stdio.h>

void square_by_itself(int * const ptr);

int main(void){

    int num1 = 2;
    int *pnum = &num1;  
    printf("value of num1 before function is: %d\n", *pnum);

    square_by_itself(pnum);
    printf("value of num1 after function is: %d\n", *pnum);
    

    return 0;
}

void square_by_itself(int * const ptr){

    *ptr = (*ptr)*(*ptr);

} 