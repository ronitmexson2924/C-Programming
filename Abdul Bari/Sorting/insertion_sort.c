#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int j = i-1;
        int x = arr[i];
        while (j > -1 && arr[j] > x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
        
    }
}
void display(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {5,3,5,7,2,8,4,5,6,1,2,3,8,0,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    display(arr,n);
    return 0;
}