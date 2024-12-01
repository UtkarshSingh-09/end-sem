/*WAP to find the length (number of characters) of your name without using library
function.*/
#include<stdio.h>
int main(){
    int length=0;
    char n[100];
    printf("enter your name ");
    fgets(n,sizeof(n),stdin);
    while (n[length]!='\0' && n[length] != '\n'){
        length ++;


    }
    printf("length of name is %d",length);
    return 0;


}