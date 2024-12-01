/*WAP to count the number of digits in a number.*/
#include<stdio.h>
int main() {
    int x, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x == 0) {
        count = 1;
    } 
    else {
        if (x < 0) {
            x = -x;
        }
        while (x > 0) {
            x /= 10;
            count++;  
        }
    }

    printf("The number of digits is: %d\n", count);
    return 0;
}
