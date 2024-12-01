/*WAP to find the length (number of characters) of your name using library function.*/
#include<stdio.h>
#include<string.h>
int main(){
    char name[100] ;
    int length;
    printf("enter the name ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    length =strlen(name);
    printf("length of name is %d",length);
    return 0;
    
}
