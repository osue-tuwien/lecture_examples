#include <stdio.h>

char* (*f) (char *);
char *plusone(char *a)
{
   *a += 1; /* might be dangerous */
   return &a[0];
}

int main(void)
{
   char str[] = "hallo";
   char *p;
   f = plusone;
   p = f(str);
   printf("%s\n", p); /* iallo */
   return 0;
}
