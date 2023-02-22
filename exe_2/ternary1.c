#include <stdio.h>
int main() 
{
    int a, b, c, temp;
    printf("Enter three integer values: ");
    scanf("%d %d %d", &a, &b, &c);
    temp = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);//using ternary oper to find maxi valu
    printf("The greatest value is: %d\n", temp);
    return 0;
}