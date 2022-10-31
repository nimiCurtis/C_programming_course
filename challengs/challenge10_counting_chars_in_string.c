/*
*Author: Nimrod Curtis
*Purpose: calculating the length of the string using pointers notation
*Date: 07.10.22
*/

#include <stdio.h>
#include <string.h>

int length_of_string(const char *ptr);

int main(void){
    char text_string[] = "some";
    
    printf("The length of 'text' is: %d\n", length_of_string(text_string));

    return 0;
}

int length_of_string(const char *text){
    const char *last_address = text;
    while(*last_address){
        ++last_address;
    }

    return last_address - text;
}