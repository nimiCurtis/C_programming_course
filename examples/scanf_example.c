/*
An example of using scanf function
*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    char str[100];
    int i;
    bool booli = true;

    printf("Enter a value :");
    scanf("%s %d", str, &i);

    printf("\nyou entered : %s %d\n",  str ,i);

    return 0;


}