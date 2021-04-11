#include <stdio.h>
#include "sum.h"
// ヘッダーファイル：関数や変数の宣言のみが記述されたファイル。
// ソースファイル：プログラムが記述されたファイル。
// gcc main.c -I /Users/miuratomohiko/Desktop/C_works/C_lang_with_suffering
int main(void) {
  int value;
  value = sum(50,100);
  printf("%d\n", value);

  return 0;
}
