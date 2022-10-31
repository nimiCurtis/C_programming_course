/*
*Author: Nimrod Curtis
*Purpose: printing the peremter of the rectangle
*Date: 23.08.22
*/

#include <stdio.h>

int main()
{
    double w,h,a,p;
    w = 5.645;h=1.45;
    a = w*h; p = (w*2) + (h*2);
    printf("perimeter is : %e\n" , p);
    printf("area is : %e\n" , a);
    return 0;
}

