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
        if(strcmp(str1,str2)==0){
            isequal=1;
        }
    }
    if(isequal){
        printf("both string are equal\n");
    }
    else{
        printf("not equal\n");
    }
    return 0;
}
    
    
   
    

    
