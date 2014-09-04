#include <stdio.h>

#define MYCONST (5)

int main(void)
{
   int i = MYCONST;
   int sum;
   long square = 0;

   sum = i + MYCONST;

   for(i = 0; i < MYCONST; i++)
     square = square + MYCONST;
   
   printf("\nMYCONST: %d\n", MYCONST);
   printf("i: %d\n", i);
   printf("sum: %d\n", sum);
   printf("square: %ld\n\n", square);

   return 0;
}
