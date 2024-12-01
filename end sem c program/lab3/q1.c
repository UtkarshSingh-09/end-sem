/*WAP to swap the content of two integer variables using bitwise operator.*/
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the first number and second number ");
    scanf("%d%d",&x,&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("new number a=%d and b=%d",x,y);
    return 0;
}