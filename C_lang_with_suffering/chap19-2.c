#include <stdio.h>
#include <stdlib.h>
// ヒープ：長期的に使用される大きなサイズのメモリを格納する領域。

int main(void) {
  int *heap;
  heap = (int *)malloc(sizeof(int)*10);
  heap = (int *)realloc(heap, sizeof(int)*100);
  free(heap);

  return 0;
}
