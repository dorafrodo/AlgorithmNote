#include <cstdio>

int main(int argc, char const *argv[]) {
  char z_to_m[11] = {'1', '0', 'X', '9', '8', '7',
                     '6', '5', '4', '3', '2'};  // Z值和校验码M之间的对应关系
  int weight[17] = {7, 9, 10, 5,  8, 4, 2, 1, 6,
                    3, 7, 9,  10, 5, 8, 4, 2};  //权重分配
  int number = 0;
  scanf("%d", &number);

  char id[19];
  bool is_all_passed = true;
  for (int i = 0; i < number; i++) {
    scanf("%s", id);
    int z = 0;
    int is_valid = true;
    for (int j = 0; j < 17; j++) {
      if (id[j] - '0' > 9) {  //检查前17个号码是否都是数字
        is_valid = false;
        break;
      } else {
        z += (id[j] - '0') * weight[j];
      }
    }

    if (is_valid) { //若前17个号码都是数字，则检查最后校验码是否正确
      z %= 11;
      if (z_to_m[z] != id[17]) {
        is_valid = false;
      }
    }

    if (!is_valid) {  //若身份证号有误，则输出
      is_all_passed = false;
      printf("%s\n", id);
    }
  }

  if (is_all_passed) {
    printf("All passed");
  }
  return 0;
}
