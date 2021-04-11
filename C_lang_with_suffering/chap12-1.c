#include <stdio.h>

/* グローバル変数s */
int count;

int countfunc(void);

int main(void) {
  int count;

  countfunc();
  count = 10;
  countfunc();
  countfunc();
  printf("main: count = %d\n", count);
  return 0;
}

int countfunc() {
  count++;
  printf("%d\n", count);
  return count;
}
