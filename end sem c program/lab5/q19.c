/*WAP to find a substring in a string without using library function.*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],substr[50];
    int i;
    char*pos;
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    printf("enter the substring");
    fgets(substr,sizeof(substr),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }
    for(i=0;substr[i]!='\0';i++){
        if(substr[i]=='\n'){
            substr[i]='\0';
            break;
        }
    }
    pos=strstr(str,substr);
    if(pos!= NULL){
        int index = pos - str;
        printf("Substring found at position: %d\n",index);
    }
    else{
        printf("substring not found\n");
    }
    return 0;
}
    