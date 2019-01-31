#include <cstdio>

const int kSickleToKnut = 29;
const int kGalleonToKunt = 17 * kSickleToKnut;

int main(int argc, char const *argv[])
{
  int galleon1 = 0, sickle1 = 0, kunt1 = 0; //应付的钱
  int galleon2 = 0, sickle2 = 0, kunt2 = 0; //实付的钱
  scanf("%d.%d.%d %d.%d.%d", &galleon1, &sickle1, &kunt1, &galleon2, &sickle2, &kunt2);
  long long price1 = galleon1 * kGalleonToKunt + sickle1 * kSickleToKnut + kunt1;
  long long price2 = galleon2 * kGalleonToKunt + sickle2 * kSickleToKnut + kunt2;
  long long change = price2 - price1;
  if (change < 0) {
    printf("-");
    change = -change;
  }
  printf("%d.%d.%d", change / kGalleonToKunt, (change % kGalleonToKunt) / kSickleToKnut, change % kSickleToKnut);
  
  return 0;
}
