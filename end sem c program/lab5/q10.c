/*WAP to to find the smallest and largest number in an integer array.*/
#include<stdio.h>
int main(){
    int n;
    printf("enter an no of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Arrays are \n");
    for (int i=0;i<n;i++){
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    int smallest= arr[0];
    int largest =arr[0];
    
    for(int i=0;i<n;i++){
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] < largest) {
            largest = arr[i];
        }
       
    }
    printf("largest numnber in array is %d\n",largest);
    printf("smallest numnber in array is %d\n",smallest);
    return 0;
    

}