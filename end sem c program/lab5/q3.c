/*WAP to print all odd numbers present in an array*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d integers:\n", n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("odd number are \n");
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}