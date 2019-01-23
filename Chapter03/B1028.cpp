#include <cstdio>

struct Person {
  char name[6];
  int year;
  int month;
  int day;
};

bool LessEqu(Person a, Person b) {  //如果a的日期小于b，则返回true
  if (a.year != b.year) {
    return a.year < b.year;
  } else if (a.month != b.month) {
    return a.month < b.month;
  } else {
    return a.day <= b.day;
  }
}

bool MoreEqu(Person a, Person b) {  //如果a的日期大于b，则返回true
  if (a.year != b.year) {
    return a.year > b.year;
  } else if (a.month != b.month) {
    return a.month > b.month;
  } else {
    return a.day >= b.day;
  }
}

int main(int argc, char const *argv[]) {
  Person oldest_person, youngest_person, temp_person, left_birthday, right_birthday;
  int line_number = 0, valid_number = 0;

  //初始化数据
  oldest_person.year = right_birthday.year = 2014;
  youngest_person.year = left_birthday.year = 1814;
  oldest_person.month = youngest_person.month = left_birthday.month = right_birthday.month = 9;
  oldest_person.day = youngest_person.day = left_birthday.day = right_birthday.day = 6;

  //读取数据，并处理
  scanf("%d", &line_number);
  for (int i = 0; i < line_number; i++) {
    scanf("%s %d/%d/%d", temp_person.name, &temp_person.year, &temp_person.month, &temp_person.day);
    if (LessEqu(temp_person, right_birthday) && MoreEqu(temp_person, left_birthday)) {
      valid_number++;
      if (LessEqu(temp_person, oldest_person)) {  //生日比现存最年长的生日要小，则他是目前最年长的
        oldest_person = temp_person;
      }
      if (MoreEqu(temp_person, youngest_person)) {
        youngest_person = temp_person;
      }
    }
  }

  //输出结果
  if (valid_number == 0) {
    printf("0");
  } else {
    printf("%d %s %s", valid_number, oldest_person.name, youngest_person.name);
  }

  return 0;
}
