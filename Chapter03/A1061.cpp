#include <cstdio>

int main(int argc, char const *argv[]) {
  char char_to_week[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
  char str1[70], str2[70], str3[70], str4[70];
  scanf("%s", str1);
  scanf("%s", str2);
  scanf("%s", str3);
  scanf("%s", str4);

  //找出第一个相同的字母和第二个相同的字母
  char same_char[2];
  int index = 0;
  while (str1[index] != str2[index] ||
         !(str1[index] >= 'A' && str1[index] <= 'G')) {  //第一个相同的字母
    index++;
  }
  same_char[0] = str1[index];
  index++;
  while (str1[index] != str2[index] ||
         !((str1[index] >= 'A' && str1[index] <= 'N') ||
           (str1[index] >= '0' && str1[index] <= '9'))) {  //第二个相同的字母
    index++;
  }
  same_char[1] = str1[index];

  //找出第三个相同字母出现的位置
  int same_position = 0;
  while (str3[same_position] != str4[same_position] ||
         !((str3[same_position] >= 'A' && str3[same_position] <= 'Z') ||
           (str3[same_position] >= 'a' && str3[same_position] <= 'z'))) {
    same_position++;
  }

  //输出结果
  printf("%s ", char_to_week[same_char[0] - 'A']);
  if (same_char[1] >= 'A') {
    printf("%02d:", same_char[1] - 'A' + 10);
  } else {
    printf("%02d:", same_char[1] - '0');
  }
  printf("%02d", same_position);

  return 0;
}
