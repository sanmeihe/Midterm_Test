// Problem#: 16524
// Submission#: 4196573
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
int main() {
   long long int n, m, i, a[100001]={0}, sum,add=0;
    int ok=1, x, y, z;
    scanf("%lld%lld", &n, &m);
    for (i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
          if(i>1) a[i] += a[i - 1];
      }
    for (i = 1; i <= m; i++) { 
       sum=0;
     scanf("%d", &x);
if (x == 1)  { ok = - ok; add = - add; continue; }
if (x == 2)  { scanf("%d", &y);  add += y; continue; } 
if (x == 3)  { 
   scanf("%d%d", &y, &z); 
    sum = (ok * a[z] - ok * a[y-1]) + add * (z - y + 1);
   printf("%lld\n", sum);
}
}
return 0;
}                                 