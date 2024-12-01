/*Write a program to create an array of structures for Student (fields: roll number, name, marks). Accept details for 5 students and calculate the average marks.
*/
#include<stdio.h>
#include<string.h>
struct student {
    int rollnumber;
    char name[50];
    int marks;
};
int main(){
    struct student students[5];
    int totalMarks =0;
    float average;
    for(int i=0;i<5;i++){
        printf("enter the roll number of student %d:",i+1);
        scanf("%d",&students[i].rollnumber);

        printf("enter the name of student %d:",i+1);
        getchar();
        fgets(students[i].name, sizeof(students[i].name),stdin);
        students[i].name[strspn(students[i].name, "\n")]= '\0';

        printf("enter the marks of student %d:",i+1);
        scanf("%d",&students[i].marks);

        totalMarks += students[i].marks;
    }
    average =totalMarks/5.00;
    printf("\n--- Student Details ---\n");
    for(int i=0;i<5;i++){
        printf("\nStudent %d:\n", i + 1);
        printf("roll number%d\n ",students[i].rollnumber);
        printf("name is %s\n",students[i].name);
        printf("marks are %d\n",students[i].marks);
    }
    printf("\naverager is %.2f\n",average);
    return 0;
}