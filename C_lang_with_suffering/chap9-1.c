#include <stdio.h>

int main(void) {
  int i;
  for (i = 1;i <= 10; i++) {
    printf("%d\n", i);
    if (i == 3) break;
  }
  return 0;
}
