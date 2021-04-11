#include <stdio.h>
#define EXCISETAX 0.05  // ここで定数を宣言
#define AUTHOR "森口"

int main(void) {
  int price;
  printf("本体価格：");
  scanf("%d", &price);
  price = (int)((1 + EXCISETAX) * price);
  printf("税込価格：%d\n", price);
  printf("作者名：%s\n", AUTHOR);

  return 0;
}
