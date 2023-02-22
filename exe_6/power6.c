#include<stdio.h>
int main() {
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%d to the power of %d is %d\n", base, exponent, power(base, exponent));
    return 0;
}
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else if (exponent % 2 == 0) {
        int temp = power(base, exponent/2);
        return temp * temp;
    }
    else {
        return base * power(base, exponent-1);
    }
}