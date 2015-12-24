#include <stdio.h>
int main() {
int n, i, j, ok;
int  m;
int f[9999] = {0};
f[1] = 1;
for (j = 2; j < 9999; j++)  f[j] = f[j - 1] + f[j - 2];
scanf("%d", &n);
for (i = 1; i <= n; i++) {
    ok = 0;
    scanf("%d", &m); 
   for (j = 2; j < 9999; j++) 
     if (f[j] == m) {
     printf("%d\n", j + 1);
     ok = 1;
     break;
}
   if (ok == 0)  printf("0\n");
}
return 0;
}             