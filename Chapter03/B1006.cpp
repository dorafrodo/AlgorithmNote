#include <cstdio>

int main(int argc, char const *argv[]) {
  int n = 0;
  scanf("%d", &n);

  int ans[3] = {0};
  int index = 0;
  while (n != 0) {
    ans[index++] = n % 10;
    n /= 10;
  }

  for (int i = index - 1; i >= 0; i--) {
    if (i == 2) {
      for (int j = 0; j < ans[i]; j++) {
        printf("B");
      }
    } else if (i == 1) {
      for (int j = 0; j < ans[i]; j++) {
        printf("S");
      }
    } else {
      for (int j = 1; j <= ans[i]; j++) {
        printf("%d", j);
      }
    }
  }
  return 0;
}
