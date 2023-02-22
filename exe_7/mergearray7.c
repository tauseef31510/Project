#include<stdio.h>
int main() {
    int arr1[] = {2 , 4, 6, 8, 10};
    int arr2[] = {1, 3, 5, 7, 9};
    int merged[10];
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int i;
    
    printf("Array 1: ");
    for (i = 0; i < m; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nArray 2: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    
    merge(arr1, m, arr2, n, merged);
   printf("\nMerged array: ");
    for (i = 0; i < m+n; i++) {
        printf("%d ", merged[i]);
    }
    
}
    void merge(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    
    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    return 0;
}