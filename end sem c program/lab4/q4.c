/*WAP to print all the odd numbers between 50 and 190.*/
#include<stdio.h>
int main(){
    printf("odd number are \n");
    for(int i=50;i<=190;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}