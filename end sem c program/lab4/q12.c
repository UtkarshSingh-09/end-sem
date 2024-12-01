/*Write a menu driven program for a calculator as shown below.
************************* CALCULATOR ***************************
1. Addition 2. Subtraction 3. Multiplication 4. Division 5. Power
*******************************************************************
Enter your choice (1/2/3/4/5): 1
Enter first number: 5
Enter second number: 10
5 + 10 = 15
*******************************************************************
Do you want to perform another operation (For YES, press y / For NO, press n): n
***************************** THANK YOU ************************* */
#include<stdio.h>
#include<math.h>
int main(){
    
    int choice,y,x,result;
    char repeat;
    do{
        printf("************************* CALCULATOR ***************************");
        printf("1. Addition 2. Subtraction 3. Multiplication 4. Division 5. Power");
        printf("*******************************************************************");
        printf("Enter your choice (1/2/3/4/5):");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("enter first number");
                scanf("%d",&x);
                printf("enter second number");
                scanf("%d",&y);
                printf("%d + %d = %d",x,y,x+y);
                break;
            case 2:
                printf("enter first number");
                scanf("%d",&x);
                printf("enter second number");
                scanf("%d",&y);
                printf("%d - %d = %d",x,y,x-y);
                break;
            case 3:
                printf("enter first number");
                scanf("%d",&x);
                printf("enter second number");
                scanf("%d",&y);
                printf("%d X %d = %d",x,y,x*y);
                break;
            case 4:
                printf("enter first number");
                scanf("%d",&x);
                printf("enter second number");
                scanf("%d",&y);
                printf("%d / %d = %d",x,y,x/y);
                break;
            case 5:
                printf("Enter base number: ");
                scanf("%lf", &x);
                printf("Enter exponent: ");
                scanf("%lf", &y);
                result = pow(x, y);
                printf("%d^%d = %d\n", x, y, result);
                break;   
        }
        printf("*******************************************************************");
        printf("Do you want to perform another operation (For YES, press y / For NO, press n): ");
        scanf("%c",&repeat);
    }
    while(repeat=='Y' || repeat=='y');
    printf("***************************** THANK YOU *************************");
    return 0;

}