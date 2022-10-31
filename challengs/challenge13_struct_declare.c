/*
*Author: Nimrod Curtis
*Purpose: this program demonstrate strucut initializing
*Date: 28.10.22
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct employee {
    char name[20];
    int hireDate;
    float salary;
};

int main(void){

    struct employee emp1 = {"nimrod",20,130.5};
    struct employee emp2;

    printf("enter employee details - name(char array),date(int),salary(float) : \n");
    printf("name: \n");
    scanf("%s",emp2.name);
    printf("hire date: \n");
    scanf("%d",&emp2.hireDate);
    printf("salary: \n");
    scanf("%f",&emp2.salary);

    printf("employee details are: \n");
    printf("name: %s \n", emp2.name);
    printf("hire date: %d \n", emp2.hireDate);
    printf("salary: %.3f \n", emp2.salary);
}