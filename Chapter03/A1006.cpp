#include <cstdio>

struct Person {
  char id_number[16];
  int in_hour;
  int in_minute;
  int in_second;
  int out_hour;
  int out_minute;
  int out_second;
};

bool InTimeCompare(Person a, Person b) {  //如果a的到达时间比b的时间早，则返回true
  if (a.in_hour != b.in_hour) {
    return a.in_hour < b.in_hour;
  } else if (a.in_minute != b.in_minute) {
    return a.in_minute < b.in_minute;
  } else {
    return a.in_second < b.in_second;
  }
}

bool OutTimeCompare(Person a, Person b) {  //如果a的离开时间比b的时间早，则返回true
  if (a.out_hour != b.out_hour) {
    return a.out_hour < b.out_hour;
  } else if (a.out_minute != b.out_minute) {
    return a.out_minute < b.out_minute;
  } else {
    return a.out_second < b.out_second;
  }
}

int main(int argc, char const *argv[]) {
  Person earlest_person, latest_person, temp_person;
  int m = 0;
  scanf("%d", &m);
  earlest_person.in_hour = 25;
  latest_person.out_hour = -1;
  for (int i = 0; i < m; i++) {
    scanf("%s %d:%d:%d %d:%d:%d", temp_person.id_number, &temp_person.in_hour,
          &temp_person.in_minute, &temp_person.in_second, &temp_person.out_hour,
          &temp_person.out_minute, &temp_person.out_second);
    if (InTimeCompare(temp_person, earlest_person)) {
      earlest_person = temp_person;
    }
    if (!OutTimeCompare(temp_person, latest_person)) {
      latest_person = temp_person;
    }
  }

  printf("%s %s", earlest_person.id_number, latest_person.id_number);
  return 0;
}
