#include <stdio.h>
#include <string.h>

int main(void) {
  int i;
  char str[256];
  scanf("%s", str);

  // 文字数を数える
  i = strlen(str);
  // for (i=0;str[i] != '\0';i++);
  printf("%d\n", i);
  return 0;
}
