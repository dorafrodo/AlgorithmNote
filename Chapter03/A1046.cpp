#include <cstdio>
#include <cmath>

int main() {
    const int MAXN = 100005;
    int n = 0;  //the nunber of distances
    int distances[MAXN] = {0}, disToExit1[MAXN] = {0};  //distance[i]保存i到i+1号顶点的距离，disToExit1[i]保存第i号顶点的下一个顶点到顶点1的距离，为了防止超时
    int totalDistance = 0;  //save the total round trip distance

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &distances[i]);
        totalDistance += distances[i];
        disToExit1[i] = totalDistance;
    }

    int m = 0;  //the numbwe of the followed lines
    scanf("%d", &m);
    int startExit = 0, endExit = 0;
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &startExit, &endExit);
        if (startExit > endExit) {
            int temp = startExit;
            startExit = endExit;
            endExit = temp;
        }
        int dis = disToExit1[endExit - 1] - disToExit1[startExit - 1];
        if (dis > totalDistance - dis) {
            dis = totalDistance - dis;
        }
        printf("%d\n", dis);
    }
    
    return 0;
}