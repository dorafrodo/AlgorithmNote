#include <cstdio>

int main() {
    const int MAXN = 1005;
    int num = 0;  //表示相加后的多项式非零项的项数

    //读取第一个多项式
    int k1 = 0;            //表示多项式的非零项的项数
    double a[MAXN] = {0};  // a[i]的值表示幂次为i的项的系数
    scanf("%d", &k1);
    num = k1;
    int expo1 = 0;       // expo1表示幂次的值
    double coef1 = 0.0;  // coef1表示系数的值
    for (int i = 0; i < k1; i++) {
        scanf("%d %lf", &expo1, &coef1);
        a[expo1] = coef1;
    }

    //读取第二个多项式并处理
    int k2 = 0;
    scanf("%d", &k2);
    int expo2 = 0;       // expo2表示幂次的值
    double coef2 = 0.0;  // coef2表示系数的值
    for (int i = 0; i < k2; i++) {
        scanf("%d %lf", &expo2, &coef2);
        if (a[expo2] == 0) {  //如果原来系数为0，那么相加后项数的数量会加1
            a[expo2] += coef2;
            num++;
        } else {  //如果原来的系数不为0，相加后为0，那么项数会减1
            a[expo2] += coef2;
            if (a[expo2] == 0) {
                num--;
            }
        }
    }

    //输出结果
    printf("%d", num);
    for (int i = MAXN - 1; i >= 0; i--) {
        if (a[i] != 0) {
            printf(" %d %.1f", i, a[i]);
        }
    }

    return 0;
}