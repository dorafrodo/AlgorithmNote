#include <cstdio>

int main(int argc, char const *argv[]) {
  char s[3] = {'W', 'T', 'L'};
  double ans = 1.0;
  for (int i = 0; i < 3; i++) {
    int index = 0;  //记录每行最大数的下标
    double temp = 0.0, max = 0.0;
    for (int j = 0; j < 3; j++) {
      scanf("%lf", &temp);
      if (temp > max) {
        max = temp;
        index = j;
      }
    }
    ans *= max;
    printf("%c ", s[index]);
  }
  ans = (ans * 0.65 - 1) * 2;
  printf("%.2f", ans);
  return 0;
}