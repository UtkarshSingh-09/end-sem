/*WAP to print the first 20 even numbers.*/
#include<stdio.h>
int main(){
    printf("even number are\n ");
    for(int i=1;i<=40;i++){
        if(i%2==0){
            printf(" %d\n",i);
        }
    }
    return 0;
}