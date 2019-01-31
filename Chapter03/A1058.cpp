#include <cstdio>

const int kSickleToKnut = 29;
const int kGalleonToSickle = 17;

int main(int argc, char const *argv[])
{
  int knut1 = 0, sickle1 = 0, galleon1 = 0;
  int knut2 = 0, sickle2 = 0, galleon2 = 0;
  int knut3 = 0, sickle3 = 0, galleon3 = 0;
  int carry = 0;

  scanf("%d.%d.%d %d.%d.%d", &galleon1, &sickle1, &knut1, &galleon2, &sickle2, &knut2);
  knut3 = (knut1 + knut2) % kSickleToKnut;
  carry = (knut1 + knut2) / kSickleToKnut;
  sickle3 = (sickle1 + sickle2 + carry) % kGalleonToSickle;
  carry = (sickle1 + sickle2 + carry) / kGalleonToSickle;
  galleon3 = galleon1 + galleon2 + carry;

  printf("%d.%d.%d", galleon3, sickle3, knut3);
  return 0;
}
