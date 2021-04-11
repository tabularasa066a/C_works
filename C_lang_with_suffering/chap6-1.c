#include <stdio.h>

int main(void) {
  int min, max, sum;

  printf("最小値と最大値を,で区切って入力してください。：");
  scanf("%d,%d", &min, &max);

  sum = (min + max)*(max - min + 1)/2;

  printf("%d 〜 %dの合計は%dです。\n", min, max, sum);
}
