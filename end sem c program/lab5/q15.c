/*WAP to copy a string without using library function.*/
#include<stdio.h>
int main(){
    int i;
    char str[100],des[100];
    printf("enter string ");
    fgets(str,sizeof(str),stdin);
    for( i=0;str[i] !='\0' ;i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }
    for(int i=0;str[i]!=0;i++){
        des[i]=str[i];
    }
    des[i]='\0';
    printf("the copy of string is %s",des);
    return 0;
    
    
    
    
}