/*
*Author: Nimrod Curtis
*Purpose: example of what is argc argv doing 
*Date: 23.08.22
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int numofarg = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];

    printf("\nnumber of args %d\n", numofarg);
    printf("arg1 is :  %s\n", arg1 );
    printf("arg2 is :  %s\n", arg2);
    return 0;
}
