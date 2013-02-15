#include <stdio.h>
int main(void)
{
   int i = 23, j = 42;
   {
      int i;
      i = 2323;
      printf("%d, ", i);
      printf("%d, ", j);
   }
   printf("%d\n", i);
   return 0;
}
