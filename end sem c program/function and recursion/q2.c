#include<stdio.h>
#include<math.h>
void printsquare (int n);
int main(){
    int n;
    printf("enter the number you want to print the square :");
    scanf("%d",&n);
    printsquare(n);
    return 0;
}
void printsquare(int n){
    n = pow(n,2);
    printf("%d",n);
}