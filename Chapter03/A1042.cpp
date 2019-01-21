#include <cstdio>

int main() {
    const int N = 54;   //the number of cards
    int k = 0;  //the number of repeat times
    scanf("%d", &k);

    int start[N + 1] = {0}, next[54] = {0}, end[54] = {0};
    for (int i = 1; i <= N; i++) {
        start[i] = i;   //initialize the start array
        scanf("%d", &next[i]);  //initialize the next array
    }

    for (int step = 0; step < k; step++) {
        for (int i = 1; i <= N; i++) {
            end[next[i]] = start[i];
        }
        for (int i = 1; i <= N; i++) {
            start[i] = end[i];
        }
    }

    char suit[5] = {'S', 'H', 'C', 'D', 'J'};   //the poker suits
    for (int i = 1; i <= N; i++) {
        printf("%c", suit[(end[i] - 1) / 13]);
        printf("%d", (end[i] - 1) % 13 + 1);
        if (i != N) {
            printf(" ");
        }
    }

    return 0;
}