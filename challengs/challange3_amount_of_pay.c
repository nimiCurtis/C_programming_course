/*
*Author: Nimrod Curtis
*Purpose: output amount of pay depend on hours worked
*Date: 24.08.22
*/

#include <stdio.h>

int main()
{
    float hr;
    float pay_net, pay_brut;
    printf("Enter amount of hours: ");
    scanf("%f", &hr);
    
    if(hr<=40.0) pay_net = hr*12.0;
    else pay_net = 40*12 +(hr-40)*18.0;

    if (pay_net<=300.0){
        pay_brut = 0.85*pay_net;
    }
    else if ((pay_net>300.0) && (pay_net<=450.0)){
        pay_brut = 0.85*300.0 + 0.8*(pay_net-300.0);
    }
    else pay_brut = 0.85*300.0 + 0.8*150 + 0.75*(pay_net-450.0);
    
    printf("your total salary is: %f\n",pay_brut);

    return 0;
}

