/*WAP to compare two strings without using library function..*/
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int isequal;
    printf("enter the string1");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the string2");
    fgets(str2,sizeof(str2),stdin);
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]=='\n'){
            str1[i]='\0';
        }
    }
    for(int i=0;str2[i]!='\0';i++){
        if(str2[i]=='\n'){
            str2[i]='\0';
        }
    }
    for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++){
            if(str1[i]==str2[i]){
            isequal=0;
            }
    }
    if (isequal) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}