#include <stdio.h>

int main(void)
{
  int i = 3;
  int a;

  a = i++ + i;
  printf("i = %d, a = %d\n", i, a);

  i = 2;
  a = i++ + ++i;
  printf("i = %d, a = %d\n", i, a);

  return 0;
}
