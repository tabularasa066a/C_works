#include <stdio.h>
#include <stdlib.h>
// ヒープ：長期的に使用される大きなサイズのメモリを格納する領域。

int main(void) {
  int i;
  int *heap;
  heap = (int *)malloc(sizeof(int) * 10); //intのサイズ分を10倍した領域を確保

  if (heap == NULL) exit(0);

  for (i = 0; i < 10; i++) {
    heap[i] = i;
  }
  printf("%d\n", heap[5]);

  free(heap);

  return 0;
}
