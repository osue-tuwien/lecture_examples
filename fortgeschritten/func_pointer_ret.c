#include <stdio.h>
#include <string.h>

char *first_b(char *a) {
   int i;
   for (i = 0; i < strlen(a); ++i) 
   {
      if (a[i] == 'b')
         return &a[i];
   }

   return NULL;
}

int main(void) 
{
   char *string1 = "foobar";
   char string2[] = "foofoo";
   char *p;
   p = first_b(string1);
   if (p != NULL)
      printf("rest ab b: %s\n", p); /* bar */

   printf("%s\n", string2);

   return 0;
}
