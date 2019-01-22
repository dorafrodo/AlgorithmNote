#include <cstdio>

struct polynomial {  //定义多项式中的每一项
    int expo;        //幂次
    double coef;     //系数
} poly[15];

const int MAX_EXPO_NUM = 2005;

int main() {
    //读取第一个多项式
    int k1 = 0;  //第一个多项式中非零项的数目
    scanf("%d", &k1);
    for (int i = 0; i < k1; i++) {
        scanf("%d %lf", &poly[i].expo, &poly[i].coef);
    }

    double ans[MAX_EXPO_NUM] = {0}; //保存结果多项式
    int num = 0;    //结果多项式中非零项的数目
    //读取第二个多项式，同时处理数据
    int k2 = 0;
    scanf("%d", &k2);
    int expo2 = 0;
    double coef2 = 0.0;
    for (int i = 0; i < k2; i++) {
        scanf("%d %lf", &expo2, &coef2);
        for (int j = 0; j < k1; j++) {  //将第二个多项式的每一项和第一个多项式的每一项依次相乘，并加入结果多项式中
            int expoAns = expo2 + poly[j].expo; //幂次数相加
            double coef1Multiply2 = coef2 * poly[j].coef;   //系数相乘
            if (ans[expoAns] == 0) {    //如果系数原来是0，则相加后项数+1
                ans[expoAns] += coef1Multiply2;
                num++;
            } else {    //如果相加后系数变0，则项数-1
                ans[expoAns] += coef1Multiply2;
                if (ans[expoAns] == 0) {
                    num--;
                }
            }
        }
    }

    //输出结果
    printf("%d", num);
    for (int i = MAX_EXPO_NUM - 1; i >= 0; i--) {
        if (ans[i] != 0) {
            printf(" %d %.1f", i, ans[i]);
        }
    }

    return 0;
}