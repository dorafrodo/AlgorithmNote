#include <stdio.h>
#include <string.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};

    //赋初值0
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    //赋初值-1
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    //赋初值1
    memset(a, 1, sizeof(a));  //int的4个字节会被赋值为00000001 00000001 00000001 00000001
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}