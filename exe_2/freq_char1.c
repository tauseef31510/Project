#include <stdio.h>
#include <string.h>

#define MAX_CHARS 100

int main()
{
    char str[100];
    int count[MAX_CHARS];
    int len, i;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
   
    for (i = 0; i < MAX_CHARS; i++)
        count[i] = 0;
    
    for (i = 0; i < len; i++)
        count[str[i]]++;

    for (i = 0; i < MAX_CHARS; i++)
        if (count[i] > 0)
            printf("'%c' appeared %d times.\n", i, count[i]);

    return 0;
}
     