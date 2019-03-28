#include <cstdio>

int main(int argc, char const *argv[]) {
  int number = 0;
  char words[85][85];
  while (scanf("%s", words[number]) != EOF) {
    number++;
  }

  for (int i = number - 1; i >= 0; i--) {
    printf("%s", words[i]);
    if (i != 0) {
      printf(" ");
    }
  }
  return 0;
}
