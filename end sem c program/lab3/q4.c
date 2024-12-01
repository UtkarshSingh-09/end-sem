/*WAP to enter a number from 1-7 and display the corresponding day of the week using
switch case statements.*/
#include<stdio.h>
int main(){
    int x;
    printf("enter a number between 1 to 7 :");
    scanf("%d",&x);
    if(x>7 || x<1){
        printf("please enter between 1 to 7");
        return 1;
    }
    switch (x){
        case 1 :
            printf("it's monday");
            break;
        case 2 :
            printf("it's tuesday");
            break;
        case 3 :
            printf("it's wednesday");
            break;
        case 4 :
            printf("it's thursday");
            break;
        case 5 :
            printf("it's friday");
            break;
        case 6 :
            printf("it's saturday");
            break;
        case 7 :
            printf("it's sunday");
            break;
    }
}