#include <stdio.h>

int main() {
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;
  int even_count = 0, odd_count = 0;

  for (i = 0; i < 10; i++) {
    if (array[i] % 2 == 0) {
      even_count++;
    } else {
      odd_count++;
    }
  }

  printf("Number of even elements: %d\n", even_count);
  printf("Number of odd elements: %d\n", odd_count);

  return 0;
}