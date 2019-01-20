#include <stdio.h>
int main() {
    int num = 0;
    scanf("%d", &num);

    int caseNum = 0;
    long long a = 0, b = 0, c = 0;
    for (int i = 0; i < num; i++) {
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a + b > c) {
            printf("Case #%d: true\n", i + 1);
        }
        else {
            printf("Case #%d: false\n", i + 1);
        }
    }
}