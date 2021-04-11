#include <stdio.h>

/* プロトタイプ宣言 */
int sum(int,int);

int main(void) {
  sum(100,1);
  return 0;
}

int sum(int max, int min) {
  printf("%d\n", (min+max)*(max-min+1)/2);
  return 0;
}
