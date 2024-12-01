/*WAP to find the addition of two matrices. */
#include<stdio.h>
int main(){
    int rows1, columns1, rows2 , columns2;
    printf("enter the no of rows and columns ");
    scanf("%d %d",&rows1,&columns1);
    printf("enter the no of columns ");
    scanf("%d %d",&rows2,&columns2 );
    if(columns1!=rows2){
        printf("enter equal rows and columns");
        return 0;
    }
    int matrix1[rows1][columns1], matrix2[rows2][columns2], matrix3[rows1][columns2];

    printf("enter the element in matrix\n");
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            printf("enter element in position (%d , %d)",i + 1, j + 1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter the element in matrix\n");
    for(int i=0;i<rows2;i++){
        for(int j=0;j<columns2;j++){
            printf("enter element in position (%d , %d)",i + 1,j + 1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            matrix3[i][j]=0;
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            for(int k=0;k<columns1;k++){
            
                matrix3[i][j]+= matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            printf("%d\t",matrix3[i][j]);
        }
        printf("\n");
    }
  
            
    return 0;
}