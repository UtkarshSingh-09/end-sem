/*WAP to find the sum and average of the elements in an integer array*/
#include<stdio.h>
int main(){
    int sum=0 ,n;
    float average;
    printf("enter the number you want to do \nas sum and average");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
       
        
    }
    average=(float)sum/n;
        
    printf("sum of number are %d\n",sum);
    printf("average of number are %.2f\n",average);
    return 0;
}