#include <stdio.h>

int main(void)
{
   int i;

   for (i = 0; i < 10; ++i)
   {
      printf("hallo\n");
   }

   char input = 'a';
   switch (input)
   {
      case 'a':
      case 'A':
         printf("a oder A\n");
         break;
      default:
         printf("Fehler");
         break;
   }
   i = 23;
   if (i == 42)
   {
      printf("i ist 42\n");
   }

   return 0;
}
