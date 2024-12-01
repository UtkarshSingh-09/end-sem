/*WAP to print first n natural numbers (Read the value of n from the keyboard).*/
#include<stdio.h>
int main(){
    int x;
    printf("enter first n natural number");
    scanf("%d",&x);
    printf("n natural number are \n");
    for(int i =1;i<=x;i++){
        
        printf("%d\n",i);
    }
    return 0;
    
}