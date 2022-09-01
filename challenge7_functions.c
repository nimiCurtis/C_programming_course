/*
*Author: Nimrod Curtis
*Purpose: total rainfall for each year, avg per yearly, avg per month
*Date: 1.09.22
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

unsigned int getGcd(unsigned int num1 ,unsigned int num2);
float absoluteValue(float num);
float square_root(float num);

int main()
{
    unsigned int a = 150;
    unsigned int b = 35;
    unsigned int gcd_res;
    gcd_res = getGcd(a , b);
    printf("gcd: %d",gcd_res);

    float c =  3;
    float abs_res;
    abs_res = absoluteValue(c);
    printf("abs: %0.2f",abs_res);

    float sqrt_res;
    sqrt_res = square_root(c);
    printf("sqrt: %0.2f",sqrt_res);

}

unsigned int getGcd(unsigned int num1 ,unsigned int num2){
    unsigned int temp;
    while( num2 != 0){
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    return num1;
}

float absoluteValue(float num){
    if(num>=0) return num;
    else return -1*num;
}

float square_root(float num){

    const float epsilon = .00001;
    float guess = 1.0;

    if(num <0 ){
        printf("negative number\n");
        return -1.0;
    }

    while(absoluteValue(guess*guess - num)>= epsilon){
        guess = (num/guess+guess)/ 2.0;

    }

    return guess;
}