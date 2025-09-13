#include<stdio.h>
void swap(int *i, int *j){
    *i = *i + *j;
    *j = *i - *j;
    *i = *i - *j;
}
void bubble_sort(int arr[], int n){
    int flag;
    for(int i = 0; i < n-2; i++){
        flag = 0;
        for(int j = 0;j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            return;
        }
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
    bubble_sort(arr,n);
    display(arr,n);
    return 0;
}