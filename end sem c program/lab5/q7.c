#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number of rows");
    scanf("%d",&n);
    printf("enter the number of columns");
    scanf("%d",&m);
    int matrix1[n][m],matrix2[n][m],matrix3[n][m];
    printf("enter the element\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter element in position (%d %d)",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter element in position (%d %d)",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d\t",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}