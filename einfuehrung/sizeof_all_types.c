#include <stdio.h>

int main(void)
{
  printf("\nGanzzahlen\n");
  printf("----------\n");
  printf("char: %lu\n", sizeof(char));
  printf("short int: %lu\n", sizeof(short int));
  printf("int: %lu\n", sizeof(int));
  printf("long int: %lu\n", sizeof(long int));
  printf("long long int: %lu\n", sizeof(long long int));

  printf("\nFließkommazahlen\n");
  printf("----------------\n");
  printf("float: %lu\n", sizeof(float));
  printf("double: %lu\n", sizeof(double));
  printf("long double: %lu\n", sizeof(long double));

  printf("\n(size in bytes)\n\n");
  return 0;
}
