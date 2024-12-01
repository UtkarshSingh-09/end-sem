/*WAP to print all the digits of a number in reverse order (each in separate lines).*/
#include<stdio.h>
int main(){
    int n,d;
    printf("enter the number you want to print in reverse order ");
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    while(n>0){
        d=n%10;
        printf("%d\n",d);
        n=n/10;
        
        
    }
    return 0;
}