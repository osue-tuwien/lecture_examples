#include <stdio.h>

void foo(int *a)
{
   *a = 23;
}

int main(void)
{
   int b = 42;
   foo(&b);

   printf("%d\n", b);

   return 0;
}
