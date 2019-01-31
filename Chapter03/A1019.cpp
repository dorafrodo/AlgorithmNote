#include <cstdio>

int main(int argc, char const *argv[]) {
  int n = 0, b = 0;
  int b_base_number[31] = {0};
  scanf("%d %d", &n, &b);

  int number_length = 0;
  do {
    b_base_number[number_length++] = n % b;
    n /= b;
  } while (n != 0);

  bool is_palindromic_number = true;
  for (int i = 0; i < number_length; i++) {
    if (b_base_number[i] != b_base_number[number_length - 1 - i]) {
      is_palindromic_number = false;
      break;
    }
  }

  if (is_palindromic_number) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  for (int i = number_length - 1; i >= 0; i--) {
    printf("%d", b_base_number[i]);
    if (i != 0) {
      printf(" ");
    }
  }

  return 0;
}
