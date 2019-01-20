#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
    int aLoseTime = 0, bLoseTime = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        if (a1 + b1 == a2 && a1 + b1 != b2) {
            bLoseTime++;
        }
        else if (a1 + b1 != a2 && a1 + b1 == b2) {
            aLoseTime++;
        }
    }

    printf("%d %d", aLoseTime, bLoseTime);
    return 0;
}