/*WAP to reverse a number.*/
#include<stdio.h>
int main(){
    int x,y,rev=0;
    printf("enter the number you want to print in reverse order ");
    scanf("%d",&x);
    if(x<0){
        x=-x;
        printf("the number which you are going to print in reverse order is :%d",x);
    }
    while(x>0){
        y=x%10;
        rev =rev*10+y;
        x/=10;
    }
    printf("reverse number are %d",rev);
    return 0;
}