#include <stdio.h>

int main()
{
   int x = 0;
   printf ("x = ");
   scanf(" %d", &x);
   int y = 0;
   printf("y = ");
   scanf(" %d", &y);
   int *val1 = &x;
   int *val2 = &y;
   printf("x + y = %d\n", *val1 + *val2);
   printf("x - y = %d\n", *val1 - *val2);
}
