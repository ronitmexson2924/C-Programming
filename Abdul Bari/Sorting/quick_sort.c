#include <stdio.h>

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l, j = h;

    while (i < j) {
        while (i <= h && arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[l], &arr[j]);
    return j;
}

void quick_sort(int arr[], int l, int h) {
    if (l < h) {
        int j = partition(arr, l, h);
        quick_sort(arr, l, j - 1);
        quick_sort(arr, j + 1, h);
    }
}

void display_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5,3,5,7,2,8,4,5,6,1,2,3,8,0,4,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, n - 1);
    display_array(arr, n);
    return 0;
}
