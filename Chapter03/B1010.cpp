#include <cstdio>

int main() { 
    int coefficient[1005] = {0};    //存储系数的值
    int exponent[1005] = {0};   //存储指数的值
    int c = 0, e = 0;
    int index = 0;  //用于计数，同时也可以存储求导前的非零项的项数
    while (scanf("%d %d", &c, &e) != EOF) {
        coefficient[index] = c;
        exponent[index] = e;
        index++;
    }

    int num = index;    //记录求导后的非零项的项数
    for (int i = 0; i < index; i++) {
        if (exponent[i] != 0) {
            coefficient[i] *= exponent[i];
            exponent[i]--;
        } else {
            coefficient[i] = 0;
            exponent[i] = 0;
            num--;
        }
    }

    if (num == 0) { //如果求导后非零项的项数为0，则输出"0 0"
        printf("0 0");
        return 0;
    }

    for (int i = 0; i < num; i++) {
        printf("%d %d", coefficient[i], exponent[i]);
        if (i != num - 1) {
            printf(" ");
        }
    }
    
    return 0;
}