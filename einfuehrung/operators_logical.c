#include <stdio.h>

int main(void)
{
  /* logical and */
  int i = 0;
  printf("i       \t%d\n", i);
  printf("0 && ++i\t%d\n", 0 && ++i);
  printf("i       \t%d\n", i);

  /* negation */
  printf("!(5)    \t%d\n", !(5));
  printf("!(0)    \t%d\n", !(0));

  return 0;
}
