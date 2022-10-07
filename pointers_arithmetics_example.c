/*
*Author: Nimrod Curtis
*Purpose: incrementing a pointer and switch address example 
*Date: 07.10.22
*/

#include <stdio.h>
#include <stddef.h>

int main(void){
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1; // get num1 address
    *pnum = 2L; // num1 = 2
    ++num2; // num2 = 1
    num2+=*pnum; // num2 = 1 + 2 = 3

    pnum = &num2; // get num2 address
    ++*pnum; // num2 = 3 + 1 = 4

    printf("num1 = %ld , num2 = %ld , *pnum = %ld , *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2 );





}