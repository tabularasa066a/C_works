#include <stdio.h>
// ポインタ：アドレスを指し示す

// ポインタ変数モードのときに読み書きしたいメモリのアドレスを代入して、
// その後、通常変数モードに切り替えてそのメモリを操作する。

int main(void) {
  int *data;
  int i, average = 0, array[10] = {15,78,98,15,98,85,17,35,42,15};

  data = array;
  for (data = array; data != &array[10]; data++) {
    average += *data;
  }
  printf("%d\n", average/10);
  return 0;
}
