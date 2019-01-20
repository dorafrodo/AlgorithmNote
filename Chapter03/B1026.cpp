#include <cstdio>
#include <cmath>

int main() {
    const double CLK_TCK = 100.0;
    int c1 = 0, c2 = 0;
    scanf("%d %d", &c1, &c2);

    int timeInSecond = (int)round((c2 - c1) / CLK_TCK);

    int second = 0, minute = 0, hour = 0;
    second = timeInSecond % 60;
    timeInSecond = timeInSecond / 60;
    minute = timeInSecond % 60;
    hour = timeInSecond / 60;

    printf("%02d:%02d:%02d", hour, minute, second);

    return 0;
}