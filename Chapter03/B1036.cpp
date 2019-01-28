#include <cstdio>

int main(int argc, char const *argv[]) {
  int row, column;
  char c;
  scanf("%d %c", &column, &c);
  if (column % 2) {
    row = column / 2 + 1;
  } else {
    row = column / 2;
  }
  for (int i = 0; i < row; i++) {
    if (i == 0 || i == row - 1) {  //控制第一行和最后一行的输出格式
      for (int j = 0; j < column; j++) {
        printf("%c", c);
        if (j == column - 1) {
          printf("\n");
        }
      }
    } else {  //控制中间行的输出格式
      for (int j = 0; j < column; j++) {
        if (j == 0) {
          printf("%c", c);
        } else if (j == column - 1) {
          printf("%c\n", c);
        } else {
          printf(" ");
        }
      }
    }
  }
  return 0;
}
