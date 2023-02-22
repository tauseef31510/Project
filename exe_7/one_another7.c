#include <stdio.h>

int main() {
    int first_arr[] = {1, 2, 3, 4, 5};
    int second_arr[5];
    int i, n;
    
    n = sizeof(first_arr) / sizeof(first_arr[0]);
    
    printf("first array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", first_arr[i]);
    }
    
    // Copying elements from source array to destination array
    for (i = 0; i < n; i++) {
        second_arr[i] = first_arr[i];
    }
    
    printf("\nsecond array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", second_arr[i]);
    }
    
    return 0;
}