/*Define and Access Members
Write a program to define a structure called Car with the following members:
brand (string)
modelYear (integer)
price (float)
Create an instance of this structure, assign values to its members, and print them.*/
#include<stdio.h>
#include<string.h>
struct car{
    char brand[50];
    int model_year;
    float price;
};
int main(){
    struct car vechile[2];
    strcpy(vechile[0].brand , "maruti");
    vechile[0].model_year=2006;
    vechile[0].price=5000000;
    
    strcpy(vechile[1].brand , "ford");
    vechile[1].model_year=2012;
    vechile[1].price=9000000;
    
    for(int i=0;i<=1;i++){
        printf("car details are \n");
        printf("brand name %s\n",vechile[i].brand);
        printf("model year %d\n",vechile[i].model_year);
        printf("price %.2f\n",vechile[i].price);
    }
    return 0;
}
    