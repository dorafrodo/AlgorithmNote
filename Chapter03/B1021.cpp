#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[])
{
  char n[10005];
  scanf("%s", n);
  int count[10] = {0};
  int n_length = strlen(n);
  for(int i = 0; i < n_length; i++)
  {
    count[n[i] - '0']++;
  }

  for (int i = 0; i < 10; i++) {
    if (count[i] != 0) {
      printf("%d:%d\n", i, count[i]);
    }
  }
  
  return 0;
}