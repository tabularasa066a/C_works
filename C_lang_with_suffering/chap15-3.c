#include <stdio.h>
// ポインタ：アドレスを指し示す

// ポインタ変数モードのときに読み書きしたいメモリのアドレスを代入して、
// その後、通常変数モードに切り替えてそのメモリを操作する。

int getaverage(int *data);

int main(void) {
  int average, array[10] = {15,78,98,15,98,85,17,35,42,15};
  printf("array[3] = %d\n", array[3]);
  average = getaverage(array);
  printf("array[3] = %d\n", array[3]);
  printf("%d\n", average);

  return 0;
}

int getaverage(int *data) {
  int i, average = 0;
  for (i=0;i<10;i++) {
    average += data[i];
  }
  data[3] = 111;
  return average / 10;
}
