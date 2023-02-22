#include <stdio.h>
#include <string.h>

int main() {
  int num, digit,count[10] = {0};
  char str[20];
  printf("Enter a number: ");
  scanf("%d",&num);
  int len=sizeof(count)/sizeof(count[0]);
  sprintf(str, "%d", num);
  for (int i = 0; i < len; i++) {
  digit = str[i] -'0';
   count[digit]++;
  }
  printf("Frequency of digit in %d is:\n", num);
  for (int i = 0; i < 10; i++) {
    if (count[i] != 0) {
      printf("Digit %d occurs %d times\n", i, count[i]);
    }
  }
  return 0;
}
