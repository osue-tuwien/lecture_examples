#include <stdio.h>

int main(void)
{
   char string[] = "hallo, welt";
   /* string is auto \0 terminated */
   char s[6];
   s[0] = 'h'; s[1] = 'a'; s[2] = 'l';
   s[3] = 'l'; s[4] = 'o'; s[5] = '\0';
   char str[] = {'f','o','o','b','a','r','\0'};
   printf("%s\n", s); /* prints "hallo" */
   s[3] = '\0';
   printf("%s\n", s); /* prints "hal" */

   printf("%s\n", str);
   printf("%s\n", string);

   return 0;
}
