#include <stdio.h>
// ポインタ：アドレスを指し示す

// ポインタ変数モードのときに読み書きしたいメモリのアドレスを代入して、
// その後、通常変数モードに切り替えてそのメモリを操作する。

void func(int *pvalue);

int main(void) {
  int value = 10;
  printf("&value = %p\n", &value);
  func(&value);
  printf("value = %d\n", value);

  return 0;
}

void func(int *pvalue) {
  printf("pvalue = %p\n", pvalue);
  *pvalue = 100;
  return;
}
