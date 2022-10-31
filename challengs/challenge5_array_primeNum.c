/*
*Author: Nimrod Curtis
*Purpose: store prime numbers between 3-100 and print them
*Date: 1.09.22
*/

#include <stdio.h>

int primeNumbers[25] = {2 , 3};


int main()
{
    for(int i=5 ; i<=100 ; i+=2){
        int j=0;
        while(primeNumbers[j]!=0){
            if(i%primeNumbers[j] == 0 ){
                break;
            }
            j++;
        }
        if(primeNumbers[j]==0) primeNumbers[j]=i;
    }

    for (int i=0; i<25;i++){
        printf(" %d ,",primeNumbers[i]);

    }
}

