#include <stdio.h>

int main(void) {
  int value = 10 + 30;
  value += 20;
  value++;
  printf("%d\n", value);
  value--;
  printf("%d\n", value);
  return 0;
}
