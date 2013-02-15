#include <stdio.h>
#include <stdlib.h>

struct foo{
   int *a;
};

int main(void)
{
   struct foo x;
   struct foo *y;
   y = &x;
   x.a = malloc(sizeof (int));
   *y->a = 42;

   printf("%d\n", *x.a); /* 42 */
   printf("%d\n", *y->a); /* 42 */
   
   free(x.a);

   return 0;
}
