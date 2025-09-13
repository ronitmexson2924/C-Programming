#include<stdio.h>
void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}
void selection_sort(int arr[], int n){
    int i,j,k;
    for(i = 0; i <n-1; i++){
        for(j = k = i; j < n; j++){
            if(arr[j] < arr[k]){
                k = j;
            }
        }
        swap(&arr[i], &arr[k]);
    }
}
void display_array(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {5,3,5,7,2,8,4,5,6,1,2,3,8,0,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    display_array(arr,n);
    return 0;
}