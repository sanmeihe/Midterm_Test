#include <stdio.h>
int main() 
{   int n,i,a[17] = {0};
  while(scanf("%d", &n)!=EOF) {
   if (n==0) printf("0000000000000000");
  if (n > 0)
   {  for (i = 16; i > 0; i--) { a[i] = n % 2; n = n / 2;}
       for (i = 1; i < 17; i++)
       printf("%d", a[i]);
   }
   if (n < 0)
   {   n = n + 32768;
      for (i = 16; i > 0; i--) { a[i] = n % 2; n = n / 2;}
      a[1] = 1;
      for (i = 1; i < 17; i++)
      printf("%d", a[i]);
    }
 printf("\n");
}
return 0;
}                