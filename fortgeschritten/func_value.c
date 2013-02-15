#include <stdio.h>

void foo(int a)
{
   a = 23;
}

int main(void)
{
   int a = 42;
   foo(a);
   
   printf("%d\n", a);
   return 0;
}
