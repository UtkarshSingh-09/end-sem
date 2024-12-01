/*Create a structure Employee with fields: name, ID, and another structure Address (with fields: city and pin). Accept and display employee details.*/
#include<stdio.h>
#include<string.h>
struct address{
    char city[50];
    int zipcode;
};
struct employee {
    char name[50];
    int id;
    struct address addresses ;

};

int main(){
    struct employee emp;
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name); 
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee city: ");
    scanf(" %[^\n]", emp.addresses.city);
    printf("Enter employee pin code: ");
    scanf("%d", &emp.addresses.zipcode);

    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("City: %s\n", emp.addresses.city);
    printf("Pin Code: %d\n", emp.addresses.zipcode);

    return 0;


}