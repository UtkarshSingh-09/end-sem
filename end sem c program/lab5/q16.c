/*WAP to copy a string using library function.*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char des[100];
    printf("enter string");
    fgets(str,sizeof(str),stdin);
    strcpy(des,str);
    printf("copy string is %s \n",des);
    return 0;
    
}