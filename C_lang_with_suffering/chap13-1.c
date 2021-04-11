#include <stdio.h>
#include <memory.h>

int main(void) {
  int array1[] = {42,79,13,75,19};
  int array2[] = {1,2,3,4,5};

  int array_size1 = sizeof(array1)/sizeof(array1[0]);
  int array_size2 = sizeof(array2)/sizeof(array2[0]);

  int i=0;
  for (i=0;i < array_size2;i++){
    printf("1: array2[%d] = %d\n", i, array2[i]);
  }

  // array1の全要素をarray2にコピーする
  memcpy(array2, array1, sizeof(array1));
  // for (i=0;i<array_size1;i++) {
  //   array2[i] = array1[i];
  // }

  for (i=0;i < array_size2;i++){
    printf("2: array2[%d] = %d\n", i, array2[i]);
  }
  return 0;
}
