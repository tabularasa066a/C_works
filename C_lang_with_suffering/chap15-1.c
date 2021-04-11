#include <stdio.h>
// ポインタ：アドレスを指し示す

// ポインタ変数モードのときに読み書きしたいメモリのアドレスを代入して、
// その後、通常変数モードに切り替えてそのメモリを操作する。

int main(void) {
  int *p;
  int i;
  p = &i;
  *p = 10; //通常変数モード
  printf("*p = %d\n", *p);
  printf("i = %d\n", i);
  return 0;
}
