#include <stdio.h>

int main() {
    const int maxn = 100010;
    int schoolScore[maxn] = {0};

    int n = 0;
    int schoolId = 0, stuScore = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &schoolId, &stuScore);
        schoolScore[schoolId] += stuScore;
    }

    int maxSchoolId = 0, maxSchoolScore = schoolScore[0];
    for(int i = 1; i <= n; i++) {
        if (schoolScore[i] > maxSchoolScore) {
            maxSchoolId = i;
            maxSchoolScore = schoolScore[i];
        }
    }

    printf("%d %d", maxSchoolId, maxSchoolScore);
    return 0;
}