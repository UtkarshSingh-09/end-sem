/*WAP to merge two arrays.*/
#include<stdio.h>
int main(){
    int n;
    printf("enter no of elements in first array");
    scanf("%d",&n);
    int arr1[n];
    printf("enter %d elements in array ",n);
    for(int i =1;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int m;
    printf("enter no of elements in first array\n");
    scanf("%d",&m);
    int arr2[m];
    printf("enter %d elements in array\n ",m);
    for(int i =1;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int merged[n+m];
    for (int i = 0; i < n; i++) {
        merged[n+i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        merged[m+i] = arr2[i];
    }
    printf("The merged array is:\n");
    for (int i = 0; i < n +m; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}