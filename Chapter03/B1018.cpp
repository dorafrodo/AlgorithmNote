#include <cstdio>

int charToInt(char c) {
    if (c == 'B') return 0;
    if (c == 'C') return 1;
    if (c == 'J') return 2;
    return -1;
}

char intToChar(int i) {
    if (i == 0) return 'B';
    if (i == 1) return 'C';
    if (i == 2) return 'J';
    return '0';
}

int main() {
    int n = 0;
    scanf("%d", &n);
    
    char aChar = '0', bChar = '0';
    int aInt = 0, bInt = 0;
    int aHandWin[3] = {0}, bHandWin[3] = {0};
    for (int i = 0; i < n; i++) {
        getchar();
        scanf("%c %c", &aChar, &bChar);
        aInt = charToInt(aChar);
        bInt = charToInt(bChar);
        if (((aInt + 1) % 3) == bInt) {
            aHandWin[aInt]++;
        } else if (((bInt + 1) % 3) == aInt) {
            bHandWin[bInt]++;
        }
    }

    int aWinTimes = 0, bWinTimes = 0, drawTimes = 0;
    int aHandWinMost = 0, bHandWinMost = 0;
    for (int i = 0; i < 3; i++) {
        aWinTimes += aHandWin[i];
        bWinTimes += bHandWin[i];
        if (aHandWin[i] > aHandWin[aHandWinMost]) {
            aHandWinMost = i;
        }
        if (bHandWin[i] > bHandWin[bHandWinMost]) {
            bHandWinMost = i;
        }
    }
    drawTimes = n - aWinTimes - bWinTimes;

    printf("%d %d %d\n", aWinTimes, drawTimes, bWinTimes);
    printf("%d %d %d\n", bWinTimes, drawTimes, aWinTimes);
    printf("%c %c", intToChar(aHandWinMost), intToChar(bHandWinMost));

    return 0;
}