#include <stdio.h>

void foo()
{
   static int i = 23;
   printf("%d, ", i);
   i = i + 1;
}

int main(void)
{
   foo();
   foo();
   foo();
   printf("\n");
   return 0;
}
