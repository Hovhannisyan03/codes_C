#include <stdio.h>

int main()
{
   int i = 0;

   while (i <= 100)
   {  if(i % 2 == 1){
      printf(" %d", i);
      }
      i++;
   }
   printf("\n");
   return 0;
}

