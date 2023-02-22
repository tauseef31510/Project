#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 10000
#define MIN_LENGTH 80

int getLine(char line[], int maxLength) {
    int i, c;
    for (i = 0; i < maxLength - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';//null to end of the string
    return i;
}
int main() {
    int length;
    char line[MAX_LENGTH];

    while ((length = getLine(line, MAX_LENGTH)) > 0) {
        if (length > MIN_LENGTH) {
            printf("%s", line);
        }
    }
    return 0;
}