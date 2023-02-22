#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main() {
    char s[] = "tauseef chennai";
    char t[] = "chennai";
    
    int result = strend(s, t);
    
    printf("Result: %d\n", result);
    
    return 0;
}

int strend(char *s, char *t) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    if (len_t > len_s) {
        return 0;
    }
    
    s += len_s - len_t;
    
    return (strcmp(s, t) == 0);
}