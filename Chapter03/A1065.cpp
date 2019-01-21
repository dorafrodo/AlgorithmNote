#include <cstdio>

int main() {
    int t = 0;  //样例的行数
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        long long a = 0, b = 0, c = 0;
        bool flag = false;
        scanf("%lld %lld %lld", &a, &b, &c);

        long long sum = a + b;
        if (a > 0 && b > 0 && sum < 0) {  //正溢出
            flag = true;
        } else if (a < 0 && b < 0 && sum >= 0) {  //负溢出
            flag = false;
        } else if (sum > c) {
            flag = true;
        } else {
            flag = false;
        }

        if (flag) {
            printf("Case #%d: true\n", i + 1);
        } else {
            printf("Case #%d: false\n", i + 1);
        }
    }

    return 0;
}