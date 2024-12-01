/*Array of Structures
Create a structure called Book with the following members:
title (string)
author (string)
price (float)
Write a program to store details of 3 books using an array of 
structures and print the details of the book with the highest price.*/
#include<stdio.h>
#include<string.h>
struct book {
    char title[100];
    char author[100];
    float price ;
};
int main(){
    struct book books[3];
    int highestPriceIndex = 0;
    for(int i=0;i<=3;i++){
        printf("enter the title of the book");
        fgets(books[i].title,sizeof(books[i].title),stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';

        printf("enter the author name");
        fgets(books[i].author,sizeof(books[i].author),stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("enter the price of book ");
        scanf("%f",&books[i].price);

        if (books[i].price > books[highestPriceIndex].price) {
            highestPriceIndex = i;
        }
    


    }
    for(int i=0;i<3;i++){
        printf("titlle of the book is %s\n",books[i].title);
        printf("author name %s\n ",books[i].author);
        printf("price of book is %.2f\n",books[i].price);
    }
    for(int i=0;i<3;i++){
        printf("titlle of the book is %s\n",books[highestPriceIndex].title);
        printf("author name %s\n ",books[highestPriceIndex].author);
        printf("price of book is %.2f\n",books[highestPriceIndex].price);
    }
    return 0;
}
