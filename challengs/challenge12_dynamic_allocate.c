/*
*Author: Nimrod Curtis
*Purpose: program the allows the user to input text , using memory allocating utilizing
*Date: 07.10.22
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){

    int limit;
    char *str = NULL;
    
    
    printf("enter the limit of the string: \n");
    scanf("%d",&limit);

    
    
    str = (char *)malloc(limit*sizeof(char));

    if (str!=NULL){
        printf("enter the string: \n");
        scanf(" ");
        gets(str);
        printf("The string you wrote is: %s\n", str);
        str = NULL;
    }
    

    
    free(str);

    return 0;




}