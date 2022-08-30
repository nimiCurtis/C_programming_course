/*
*Author: Nimrod Curtis
*Purpose: indicate were the player guessed the number within five tries
*Date: 30.08.22
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;
    int guess;
    
    for(int i =5; i>0 ; i--){
        printf("You have %d tries left.\n",i);
        printf("Enter a guess: ");
        scanf("%d", &guess);
        
        if(guess>randomNumber){
            printf("Sorry, %d is worng. My number is less than that\n", guess);
        }
        else if(guess<randomNumber){
            printf("Sorry, %d is worng. My number is higher than that\n", guess);
        }
        else{
            printf("Congratulations you guessed it\n");
            break;
        }
    }





}