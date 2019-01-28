#include <cstdio>
#include <cstring>

int main() {
  const int kMaxLength = 80;
  char characters[kMaxLength + 1];
  int side_length = 0, bottom_length = 0;
  int string_length = 0;
  scanf("%s", characters);
  string_length = strlen(characters);

  //calculate the length of each side
  side_length = (string_length + 2) / 3;
  bottom_length = string_length + 2 - 2 * side_length;

  //print the result
  for (int i = 0; i < side_length - 1; i++) { //control each line's format (except the last line)
    printf("%c", characters[i]);
    for (int j = 0; j < bottom_length - 2; j++) {
      printf(" ");
    }
    printf("%c\n", characters[string_length - i - 1]);
  }
  for (int i = side_length - 1; i < side_length - 1 + bottom_length; i++) { //control the last line's format
    printf("%c", characters[i]);
  }
  return 0;
}
