#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[]) {
  const char *digit_to_pinyin[10] = {"ling", "yi",  "er", "san", "si",
                               "wu",   "liu", "qi", "ba",  "jiu"};

  char number[105];
  scanf("%s", number);

  int sum = 0;
  for (int i = 0; i < strlen(number); i++) {
    sum += number[i] - '0';
  }

  int sum_array[3] = {0};
  int index = 0;
  while (sum != 0) {
    sum_array[index++] = sum % 10;
    sum /= 10;
  }
  for (int i = index - 1; i >= 0; i--) {
    printf("%s", digit_to_pinyin[sum_array[i]]);
    if (i != 0) {
      printf(" ");
    }
  }

  return 0;
}
