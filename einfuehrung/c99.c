#include <stdio.h>

int main(void)
{
  /* i, j nicht am anfang eines blocks */
  for(int i = 0; i < 10; i++)
  {
    (void) printf("%d\n", i);
    int j = 23;
    (void) printf("%d\n", j);
  }
  return 0;
}
