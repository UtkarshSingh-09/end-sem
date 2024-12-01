/*WAP display a matrix using 2D array*/
#include<stdio.h>
int main(){
    int rows , columns;
    printf("enter the no of rows ");
    scanf("%d",&rows);
    printf("enter the no of colums ");
    scanf("%d",&columns);
    int matrix[rows][columns];
    printf("enter the element in matrix \n");
    for(int i =0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("enter elements in position (%d %d) ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}