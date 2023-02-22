#include <stdio.h>

int *strcat_ptr(char *s, char *t);

int main() {
    char s[100] = "tauseef";
    char t[] = "rahim";
    
    printf("Bef concat: s = %s, t = %s\n", s, t);
    
    strcat_ptr(s, t);
    
    printf("Aft concat: s = %s, t = %s\n", s, t);
    
}

int *strcat_ptr(char *s, char *t) {
    char *p = s;
    
    while (*p != '\0') {
        p++;
    }
    
    while (*t != '\0') {
        *p = *t;
        p++;
        t++;
    }
    
    return 0;
}
