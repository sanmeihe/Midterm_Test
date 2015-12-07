// Problem#: 16514
// Submission#: 4196464
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
int main() {
int i, j, k, n, total = 1;
k = 1;
int a[100][100] = {0};
scanf("%d", &n);
while (k <= n / 2) {

for ( i = k; i <= n - k + 1; i++)
a[k][i] = total++;
for ( j =  k + 1; j <= n-k+1; j++ )
a[j][n-k+1] = total++;
for( i = n - k;i >= k; i--)
a[n-k+1][i] = total++;
for( j = n-k;j>=k+1;j-- )
a[j][k]= total++;

k++;
}
if (total < n * n + 1)
a[n / 2 + 1][n / 2 + 1] = n * n;
for (i = 1; i <= n; i++) {
for (j = 1; j <= n; j++) {
printf("%d", a[i][j]);
if(j < n) printf(" ");
}
if(i < n) printf("\n");
}
printf("\n");
return 0;
}                                 