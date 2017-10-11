//some operation on strings
#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>//for using uint
#include<string.h>//string handling library
int main()
{
    char string1[200];
    char string2[200];
    putchar("----scenario1----");
    strcpy(string1,"anybody");
    strcpy(string2,"anybody at home");


    int len1=strlen(string1);
    printf("lenghth of string1:%d\n",len1);
    int len2=strlen(string2);
    printf("lenghth of string2:%d\n",len2);
    printf("Return value is:%d\n",strcmp(string1,string2));
putchar("----scenario2----");
//putchar("----scenario1----");
   char string3[200];
    char string4[200];
    strcpy(string3,"anybody at home");
    strcpy(string4,"anybody");


    int len3=strlen(string3);
    printf("lenghth of string3:%d\n",len3);
    int len4=strlen(string4);
    printf("lenghth of string4:%d\n",len4);
    printf("Return value is:%d\n",strcmp(string3,string4));



    return 0;
}
