#include <stdio.h>

int main(void) {
  int r;
  double s;

  do {
    printf("半径？：");
    scanf("%d", &r);
  } while (r < 0);

  s = 3.14 * r * r;
  printf("面積は%fです。\n", s);

  return 0;
}
