/*WAP to print the sum of first n natural numbers.*/
#include<stdio.h>
int main(){
    int x,sum=0;
    printf("enter a number n");
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        sum+=i;
    }
    printf("sum of n natural number is %d",sum);
    return 0;
}