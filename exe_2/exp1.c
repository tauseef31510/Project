#include <stdio.h>

int main() {
  int a, b, c, d;
  printf("Enter values for a, b, c, and d: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int result = 2 * a * 5 * b + c - 6 * d * 5 * c;
  printf("Result: %d\n", result);
  return 0;
}