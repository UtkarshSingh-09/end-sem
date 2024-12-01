/*WAP to find the sum of all the digits of a number read from the keyboard.*/
#include<stdio.h>
int main(){
    int x,d,sum=0;
    printf("enter a number to sum it");
    scanf("%d",&x);
    if(x<0){
        x=-x;
    }
    while(x>0){
        d=x%10;
        printf("%d\n",&d);
        sum=sum+d;
        x=x/10;
        
    }
    printf("sum of all digit are %d",sum);
    return 0;
}