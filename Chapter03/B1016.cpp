#include <stdio.h>
int main() {
    long long a = 0, da = 0, b = 0, db = 0;
    long long pa = 0, pb = 0;
    scanf("%lld %lld %lld %lld", &a, &da, &b, &db);
    while (a != 0) {
        if (a % 10 == da) {
            pa = pa * 10 + da;
        }
        a /= 10;
    }
    while (b != 0) {
        if (b % 10 == db) {
            pb = pb * 10 + db;
        }
        b /= 10;
    }
    printf("%d", pa + pb);
    return 0;
}