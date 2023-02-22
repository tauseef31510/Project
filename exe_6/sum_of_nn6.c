#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the start of range: ");
    scanf("%d", &start);
    printf("Enter the end of range: ");
    scanf("%d", &end);
    printf("Sum of natural numbers from %d to %d = %d\n", start, end, sum_of_range(start, end));
    return 0;
}

int sum_of_range(int start, int end) {
    if (start > end) {
        return 0;
    }
   
    else {
        return start + sum_of_range(start + 1, end);
    }
}

