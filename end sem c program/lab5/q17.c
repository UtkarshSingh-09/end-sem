/*WAP to find a substring in a string without using library function.*/
#include<stdio.h>
int main(){
    char str[100],substr[50];
    int i, j,found=0;
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    printf("enter the substring");
    fgets(substr,sizeof(substr),stdin);
    for(i=0;str[i]!='\0';stdin){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }
    for(i=0;substr[i]!='\0';stdin){
        if(substr[i]=='\n'){
            substr[i]='\0';
            break;
        }
    }
    int strlen=0,substrlen=0;
    for(i=0;str[i]!='\0';i++){
        strlen++;
    }
    for(i=0;substr[i]!='\0';i++){
        substrlen++;
    }
    for(i=0;i<=strlen-substrlen;i++){
        found=1;
        for(j=0;j<substrlen;j++){
            if (str[i+j]!=substr[j])
                found=0;
        }
        if(found){
            printf("Substring found at position: %d\n",i);
            break;
        }
    }
    if(!found){
        printf("substring not found\n");
    }
    return 0;
}
    
    
    