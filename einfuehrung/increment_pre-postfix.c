#include <stdio.h>

int main(void)
{
   int n = 0;
   int m = 0;
   
   n = ++m;

   printf("prefix:  n = %d, m = %d\n", n, m);
   
   n = 0;
   m = 0;

   n = m++;

   printf("postfix: n = %d, m = %d\n", n, m);

   return 0;
}
