#include <cstdio>

int main(int argc, char const *argv[]) {
  char symbol[13] = {'0', '1', '2', '3', '4', '5', '6',
                     '7', '8', '9', 'A', 'B', 'C'};
  int RGB_Earth[3] = {0};
  scanf("%d %d %d", &RGB_Earth[0], &RGB_Earth[1], &RGB_Earth[2]);

  char RGB_Mars[6];
  for (int i = 0; i < 6; i++) {
    RGB_Mars[i] = '0';
  }

  int index = 0;
  for (int i = 0; i < 3; i++) {
    do {  //储存在数组中的顺序是：红2红1绿2绿1蓝2蓝1
      RGB_Mars[index++] = symbol[RGB_Earth[i] % 13];
      RGB_Earth[i] /= 13;
    } while (RGB_Earth[i] != 0 || index % 2 != 0);  //保证循环两次
  }

  printf("#");
  for (int i = 0; i < 3; i++) {
    for (int j = 1; j >= 0; j--) {
      printf("%c", RGB_Mars[i * 2 + j]);
    }
  }
  return 0;
}
