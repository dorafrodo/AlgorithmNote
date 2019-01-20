#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    int answer[5] = {0};
    int count[5] = {0};
    int num = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        switch (num % 5) {
            case 0:
                if (!(num % 2)) {
                    answer[0] += num;
                    count[0]++;
                }
                break;
            case 1:
                if (count[1] % 2) {
                    answer[1] -= num;
                }
                else {
                    answer[1] += num;
                }
                count[1]++;
                break;
            case 2:
                answer[2]++;
                count[2]++;
                break;
            case 3:
                answer[3] += num;
                count[3]++;
                break;
            case 4:
                if (num > answer[4]) {
                    answer[4] = num;
                }
                count[4]++;
                break;
        }
    }

    if (count[0] == 0) {
        printf("N ");
    } else {
        printf("%d ", answer[0]);
    }
    if (count[1] == 0) {
        printf("N ");
    } else {
        printf("%d ", answer[1]);
    }
    if (count[2] == 0) {
        printf("N ");
    } else {
        printf("%d ", answer[2]);
    }
    if (count[3] == 0) {
        printf("N ");
    } else {
        printf("%.1f ", ((double)answer[3] / count[3]));
    }
    if (count[4] == 0) {
        printf("N");
    } else {
        printf("%d", answer[4]);
    }
    
    return 0;
}