#include <cstdio>

const int MAXN = 1005;  //考生数量N<=1000
struct Student {
    long long id;
    int exam_seat;
} test_seat[MAXN];  //数组的下标代表试机座位号

int main() {
    int student_number = 0;
    scanf("%d", &student_number);
    long long student_id = 0;
    int exam_seat_number = 0, test_seat_num = 0;
    for (int i = 0; i < student_number; i++) {  //输入学生数据
        scanf("%lld %d %d", &student_id, &test_seat_num, &exam_seat_number);
        test_seat[test_seat_num].id = student_id;
        test_seat[test_seat_num].exam_seat = exam_seat_number;
    }

    int m = 0;  //带查询的试机座位号数量
    int test_seat_num_to_check = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {  //查找结果并输出
        scanf("%d", &test_seat_num_to_check);
        printf("%lld %d\n", test_seat[test_seat_num_to_check].id,
               test_seat[test_seat_num_to_check].exam_seat);
    }

    return 0;
}