#include <stdio.h>
#include <math.h>

int binary_to_decimal(int binary) {
    int decimal=0,i=0;
    while (binary!= 0) {
        decimal += (binary%10)*pow(2,i);
        ++i;
        binary/=10;2;
    }
    return decimal;
}

int main() {
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("The decimal of %d is %d", binary, binary_to_decimal(binary));
    return 0;
}
