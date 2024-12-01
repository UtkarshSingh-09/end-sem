/*WAP to print the multiplication table of a number between 2 and 25.*/
#include<stdio.h>
int main(){
    int x,y;
    printf("enter a number between 1 to 25 : ");
    scanf("%d",&x);
    for(int i=1;i<=10;i++){
        y=i*x;
        printf("%d X %d = %d\n",x,i,y);
    }
    return 0;
}