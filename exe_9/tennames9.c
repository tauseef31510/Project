#include <stdio.h>
#include <string.h>

#define NUM_NAMES 10
#define MAX_NAME_LENGTH 50

int main() {
    char names[NUM_NAMES][MAX_NAME_LENGTH]; // Array to store the names
    char *name_ptrs[NUM_NAMES]; // Array of pointers to store the addresses of the names
    char temp[MAX_NAME_LENGTH]; // Temporary array to store names during sorting
    int i, j;

    // Get names from the user and store them in the array
    printf("Enter %d names:\n", NUM_NAMES);
    for (i = 0; i < NUM_NAMES; i++) {
        printf("Name %d: ", i+1);
        scanf("%s", names[i]);
        // Store the address of each name in the array of pointers
        name_ptrs[i] = names[i];
    }

    // Sort the names using the array of pointers
    for (i = 0; i < NUM_NAMES - 1; i++) {
        for (j = i+1; j < NUM_NAMES; j++) {
            if (strcmp(name_ptrs[i], name_ptrs[j]) > 0) {
               
 // Swap the pointers in the array of pointers
                char *temp_ptr = name_ptrs[i];
                name_ptrs[i] = name_ptrs[j];
                name_ptrs[j] = temp_ptr;
            }
        }
    }

    // Display the sorted names
    printf("\nSorted names:\n");
    for (i = 0; i < NUM_NAMES; i++) {
        printf("%s\n", name_ptrs[i]);
    }

    return 0;
}
