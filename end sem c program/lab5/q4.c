/*WAP to search an element in an array.*/
#include<stdio.h>
int main(){
    int n,target ,found=0;
    printf("enter no of element in array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d element in array\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter an element you want to target : ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Element %d found at index %d.\n", target, i);
            found=1;
            break;
        }
    }
    if(!found){
        printf("the element you entered is not present in given array\n");
    }
    return 0;
}
