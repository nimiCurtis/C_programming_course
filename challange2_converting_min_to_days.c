/*
*Author: Nimrod Curtis
*Purpose: output minutes and its equivalent in years and days
*Date: 24.08.22
*/

#include <stdio.h>

int main()
{
    int minutesentered = 0;
    double years;
    double days;
    printf("Enter a number of minutes: ");
    scanf("%d", &minutesentered);
    days =   minutesentered/(60.0*24.0);
    years =   minutesentered/(60.0*24.0*365.0);
    printf("equivalent days: %f\n", days);
    printf("equivalent years: %f\n", years);
    return 0;
}

