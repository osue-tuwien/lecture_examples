#include <stdio.h>

#define DOUBLE(a) a+a
#define DOUBLE_impr(a) ( (a) + (a) )

int main(void)
{
int x = DOUBLE(5) * 3;

printf("x: %d\n", x);
x = DOUBLE_impr(5) * 3;
printf("x: %d\n", x);

x = 3;
int y = DOUBLE(++x);
/* y = ( (++x) + (++x) ) */
printf("y: %d\n", y);

return 0;
}
