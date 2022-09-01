/*
*Author: Nimrod Curtis
*Purpose: total rainfall for each year, avg per yearly, avg per month
*Date: 1.09.22
*/

#include <stdio.h>
#define MONTH 12
#define YEARS 5


int rainForcast[YEARS][MONTH] = {{1,2,3,1,2,3,4,1,2,3,100,2},
                                    {1,3,3,1,5,3,4,6,27,32,12,2},
                                    {1,2,3,21,22,3,44,61,2,3,1,2},
                                    {1,23,3,1,2,3,34,1,22,32,11,2},
                                    {1,26,3,1,28,3,4,91,2,3,11,12}};


int total = 0;
int yearly;
int monthly;
float avgYear[5];
float avgMonth[12];

int main()
{
    for(int i = 0; i<YEARS;i++){
        yearly = 0;
        for(int j = 0; j<MONTH; j++){
            yearly+=rainForcast[i][j];
        }
        avgYear[i]=(float)yearly/MONTH;
    }

    for(int i = 0; i<MONTH;i++){
        monthly = 0;
        for(int j = 0; j<YEARS; j++){
            monthly+=rainForcast[j][i];
        }
        avgMonth[i]=(float)monthly/YEARS;
    }

    for(int i = 0; i<YEARS;i++){
        printf(" %f , ", avgYear[i]);
    }

    printf("\n");

    for(int i = 0; i<MONTH;i++){
        printf(" %f , ", avgMonth[i]);
    }



}
