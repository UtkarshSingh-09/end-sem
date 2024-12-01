/*WAP to check whether a number is palindrome or not.*/
#include<stdio.h>
int main(){
    int x,y,rev=0,z=0;
    printf("enter the number you want to print in reverse order ");
    scanf("%d",&x);
    z=x;
    if(x<0){
        x=-x;
        printf("the number which you are going to print in reverse order is :%d",x);
    }
    while(x>0){
        y=x%10;
        rev =rev*10+y;
        x/=10;
    }
    
    if(rev==z){
        printf("number is palindrome \n");
    }
    else{
        printf("number is not palindrome\n");
    }
    return 0;
}