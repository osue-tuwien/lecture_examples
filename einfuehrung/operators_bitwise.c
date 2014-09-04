#include <stdio.h>

int main(void)
{
  /* shift unsigned */
  unsigned char i = 0x04;
  printf("i       \t0x%02X\n", i);
  printf("i>>1    \t0x%02X\n", i>>1);

  /* shift signed */
  signed char j = -8;
  printf("j       \t0x%02X (%d)\n", j, j);
  printf("j>>1    \t0x%02X (%d)\n", j>>1, j>>1);
  j = j >> 1;
  printf("j=j>>1; \t0x%02X (%d)\n", j, j);
  printf("-4      \t0x%02X (%d)\n", (-4), (-4));

  return 0;
}
