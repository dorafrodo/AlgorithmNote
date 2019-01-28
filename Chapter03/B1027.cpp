#include <cstdio>
#include <cmath>

int main(int argc, char const *argv[])
{
  int n = 0;  //给定的符号的个数
  char c = '0'; //字符的样式
  scanf("%d %c", &n, &c);
  int base_length = 0;  //底边长
  base_length = (int)(sqrt(2.0 * (1 + n)) - 1);
  if (!(base_length % 2)) {  //保证底边长是奇数
    base_length--;
  }

  //输出图形
  int blank_number = 0;
  for (int i = base_length; i > 0; i -= 2) {
    blank_number = (base_length - i) / 2;
    for (int j = 0; j < blank_number; j++) {
      printf(" ");
    }
    for (int j = 0; j < i; j++) {
      printf("%c", c);
    }
    printf("\n");
  }
  for (int i = 3; i <= base_length; i += 2) {
    blank_number = (base_length - i) / 2;
    for (int j = 0; j < blank_number; j++) {
      printf(" ");
    }
    for (int j = 0; j < i; j++) {
      printf("%c", c);
    }
    printf("\n");
  }

  //输出剩余的符号个数
  int left_number = 0;
  left_number = n - ((1 + base_length) * (1 + base_length) / 2 - 1);
  printf("%d", left_number);

  return 0;
}
