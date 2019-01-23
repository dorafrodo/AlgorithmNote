#include <cstdio>

struct Student {
    char name[11];
    char id[11];
    int score;
};

int main(int argc, char const *argv[])
{
    int student_number = 0;
    Student max_score_student, min_score_student, temp_student;
    max_score_student.score = -1;
    min_score_student.score = 101;

    scanf("%d", &student_number);
    for (int i = 0; i < student_number; i++) {
        scanf("%s %s %d", temp_student.name, temp_student.id, &temp_student.score);
        if (temp_student.score < min_score_student.score) {
            min_score_student = temp_student;
        }
        if (temp_student.score > max_score_student.score) {
            max_score_student = temp_student;
        }
    }

    printf("%s %s\n", max_score_student.name, max_score_student.id);
    printf("%s %s", min_score_student.name, min_score_student.id);

    return 0;
}
