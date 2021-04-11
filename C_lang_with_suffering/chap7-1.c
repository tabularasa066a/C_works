#include <stdio.h>

int main(void) {
  int suuti = 0;
  scanf("%d", &suuti);
  if (suuti >= 8 && suuti <= 12) printf("８〜１２の間です。\n");
  if (!(suuti >= 8 && suuti <= 12)) printf("８〜１２の間ではありません。\n");
  return 0;
}
