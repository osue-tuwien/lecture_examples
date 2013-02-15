#include <stdio.h>

void foo(int *a)
{
   *a = 23;
}

int main(void)
{
   int a[] = {1, 2, 3, 4, 5, 6};
   foo(a);
   printf("%d\n", a[0]); /* 23 */
   foo(&a[3]);
   printf("%d\n", a[3]); /* 23 */

   return 0;
}
