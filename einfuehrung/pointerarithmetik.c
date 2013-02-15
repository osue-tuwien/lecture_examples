#include <stdio.h>

int main(void)
{
   int ar[5] = {1, 2, 3, 4, 5};
   int *p;
   p = &ar[0];

   printf("%d\n", *p); /* 1 */
   *p += 22;
   printf("%d\n", ar[0]); /* 23 */
   p += 1; /* Pointer zeigt auf das naechste Element */
   printf("%d\n", *p); /* 2 */

   return 0;
} 
