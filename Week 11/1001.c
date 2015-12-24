#include <stdio.h>
int main() {
int n, i, x, j;
int f[999] = {0};
f[1] = 2;
while(1) {
scanf("%d", &n);
if(n==-1) 
break;
for (j = 2; j <= n; j++)
f[j] = f[j - 1] + f[j - 2];
printf("%d\n", f[n]);
}
return 0;
}          