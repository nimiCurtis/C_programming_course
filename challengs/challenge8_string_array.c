/*
*Author: Nimrod Curtis
*Purpose: manual strlen, strcat, strmcp
*Date: 22.09.22
*/

#include <stdio.h>

int stringLength(const char str[]);
void stringConcatenate(char res[], const char str1[], const char str2[]);



int main(){

    const char text[] = "abcd";
    char result[] = "";
    const char word1[] = "nimi";
    const char word2[] = "curtis";
    
    printf("The length of %s is %d \n",text,stringLength(text));
    stringConcatenate(result,word1,word2);

    printf(" %s \n",result);
    
    
    
    return 0;
}

int stringLength(const char str[]){
    int i = 0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

void stringConcatenate(char res[], const char str1[], const char str2[]){
    int i = 0;
    int j = 0;
    while(str1[i]!='\0'){
        
        res[i]=str1[i];
        i++;
    }

    while(str2[j]!='\0'){
        res[i+j]=str2[j];
        j++;
    }

    res[i+j] = '\0';
}