#include <cstdio>

struct Student {
  char name[11];
  char gender;
  char id[11];
  int grade;
};

int main(int argc, char const *argv[]) {
  Student lowest_male, highest_female, temp_student;

  //初始化数据
  lowest_male.grade = 101;
  highest_female.grade = -1;

  //读取数据
  int line_number = 0;
  scanf("%d", &line_number);
  for (int i = 0; i < line_number; i++) {
    scanf("%s %c %s %d", temp_student.name, &temp_student.gender,
          temp_student.id, &temp_student.grade);
    if (temp_student.gender == 'M') {
      if (temp_student.grade < lowest_male.grade) {
        lowest_male = temp_student;
      }
    } else {
      if (temp_student.grade > highest_female.grade) {
        highest_female = temp_student;
      }
    }
  }

  //输出结果
  if (highest_female.grade == -1) {  //输出女生结果
    printf("Absent\n");
  } else {
    printf("%s %s\n", highest_female.name, highest_female.id);
  }

  if (lowest_male.grade == 101) {  //输出男生结果
    printf("Absent\n");
  } else {
    printf("%s %s\n", lowest_male.name, lowest_male.id);
  }

  if (highest_female.grade == -1 || lowest_male.grade == 101) {  //输出差值
    printf("NA");
  } else {
    printf("%d", highest_female.grade - lowest_male.grade);
  }

  return 0;
}
