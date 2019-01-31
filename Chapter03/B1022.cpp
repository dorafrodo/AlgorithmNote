#include <cstdio>

int main() {
  int a = 0, b = 0, d = 0;  // a和b是两个非负十进制数，d是进制的基数
  int sum = 0;
  int answer[31] = {0};

  scanf("%d %d %d", &a, &b, &d);
  sum = a + b;

  int index = 0;
  do {
    answer[index] = sum % d;
    sum /= d;
    index++;
  } while (sum != 0);

  for (int i = index - 1; i >= 0; i--) {
    printf("%d", answer[i]);
  }
  return 0;
}