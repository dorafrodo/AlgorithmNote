#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[]) {
  char scientific_notion_number[10000];
  scanf("%s", scientific_notion_number);

  char sign = scientific_notion_number[0];  //数字的正负号
  int point_postion = 2;                    //小数点的位置
  char exp_sign = '+';                      //指数符号
  int exp_abs = 0;                          //指数的绝对值
  int e_position = 0;                       //科学计数法中E的位置
  for (int i = 0; i < strlen(scientific_notion_number); i++) {
    if (scientific_notion_number[i] == 'E') {
      e_position = i;
      break;
    }
  }
  exp_sign = scientific_notion_number[e_position + 1];
  for (int i = e_position + 2; i < strlen(scientific_notion_number); i++) {
    exp_abs = exp_abs * 10 + (scientific_notion_number[i] - '0');
  }

  //输出结果
  if (sign == '-') {  //数字正负号
    printf("%c", sign);
  }
  if (exp_sign == '-') {  //若指数为负号
    printf("0.");
    for (int i = 0; i < exp_abs - 1; i++) {
      printf("0");
    }
    for (int i = 1; i < e_position; i++) {
      if (scientific_notion_number[i] != '.') {
        printf("%c", scientific_notion_number[i]);
      }
    }
  } else {  //若指数为正号
    for (int i = 1; i < e_position; i++) {
      if (scientific_notion_number[i] != '.') {
        if (i == exp_abs + 3) {
          printf(".");
        }
        printf("%c", scientific_notion_number[i]);
      }
    }
    for (int i = 0; i < exp_abs - (e_position - 3); i++) {
      printf("0");
    }
  }

  return 0;
}
