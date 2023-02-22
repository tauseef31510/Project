#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 10

int main() {
    char *names[MAX_NAMES];
    int num_names = 0;

    // read names from standard input
    char input[100];
    while (num_names < MAX_NAMES && fgets(input, sizeof(input), stdin)) {
        // strip newline character if present
        input[strcspn(input, "\n")] = '\0';
        
        // allocate memory for the name
        char *name = malloc(strlen(input) + 1);
        if (name == NULL) {
            fprintf(stderr, "Error: out of memory\n");
            exit(EXIT_FAILURE);
        }
        
        // copy the name into the allocated memory
        strcpy(name, input);
        
        // add the name to the list
        names[num_names++] = name;
    }

    // sort the list of names using an array of pointers
    for (int i = 0; i < num_names - 1; i++) {
        for (int j = i + 1; j < num_names; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char *temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    // print the sorted list of names
    for (int i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }

    // free the dynamically allocated memory
    for (int i = 0; i < num_names; i++) {
        free(names[i]);
    }

    return 0;
}
