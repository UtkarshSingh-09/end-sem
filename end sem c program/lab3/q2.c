/*Write a menu driven program to calculate the area of the following shapes:

(a) Square
(b) Rectangle
(c) Circle
(d) Triangle (use Hero’s formula)*/
#include<stdio.h>
#include<math.h>
int main(){
    int choice,a,b,c;
    float area,s;
    printf("1. square\n ");
    printf("2.  rectangle\n");
    printf("3.   circle\n ");
    printf("4.  triangle\n");
    printf("enter your choice\n ");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            printf("enter the sides of square ");
            scanf("%d",&a);
            area = a*a;
            printf("area of square is %f ",area);
            break;
        case 2:
            printf("enter the length and breadth of rectangle ");
            scanf("%d%d",&a,&b);
            area = a*b;
            printf("area of rectangle is %f ",area); 
            break;
        case 3:
            printf("enter the radius of circle ");
            scanf("%d",&a);
            area = 3.14*a*a;
            printf("area of circle is %f ",area);
            break;
        case 4:
            printf("enter the sides of triangle a,b,c ");
            scanf("%d%d%d",&a,&b,&c);
            s=(a+b+c)/2.0;
            area =sqrt(s*(s-a)*(s-b)*(s-c));
            printf("area of triangle is %f ",area);
            break;
        return 0;
            
    }
}