#include <stdio.h>
#include <stdlib.h>

#define MAX_FILE_NAME 100

int main() {
    FILE *fp;
    char file_name[MAX_FILE_NAME];
    char ch;
    int num_lines = 0, num_words = 0, num_chars = 0;
    int in_word = 0;

    printf("Enter the name of the file to read: ");
    fgets(file_name, MAX_FILE_NAME, stdin);

    // remove newline character from file name
    file_name[strcspn(file_name, "\n")] = 0;

    // open the file
    fp = fopen(file_name, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", file_name);
        exit(1);
    }

    // read the file character by character
    while ((ch = fgetc(fp)) != EOF) {
        num_chars++;

        if (ch == '\n') {
            num_lines++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            num_words++;
        }
    }

    printf("Number of lines: %d\n", num_lines);
    printf("Number of words: %d\n", num_words);
    printf("Number of characters: %d\n", num_chars);

    // close the file
    fclose(fp);

    return 0;
}