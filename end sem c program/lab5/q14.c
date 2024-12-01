/*WAP to concatenate two strings without using library function.*/
#include<stdio.h>
int main(){
    char str1[100], str2[100];
    int i=0,j=0;
    printf("enter the str1");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the str2");
    fgets(str2,sizeof(str2),stdin);
    while(str1[i] !='\0'){
        if(str1[i]=='\n'){
            str1[i]='\0';
            break;
        }
    
        i++;
    }
    i=0;
    while(str2[i] !='\0'){
        if(str2[i]=='\n'){
            str2[i]='\0';
            break;
        }
        i++;
    }
    
    i=0;
    while (str1[i] != '\0') {
        i++;
    }
    j=0;
    while (str2[j] != '\0') {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("two string are %s",str1);
    return 0;
}

