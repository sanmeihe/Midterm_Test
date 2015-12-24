#include <stdio.h>
int a[1000001] = {0};
int main() {
    int n, m;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++) {
      scanf("%d",&m);
      a[m] += 1;
}
     for (i = 0; i <= 1000000; i++) {
        while (a[i] > 0) {
            printf("%d\n", i);
            a[i]--;
 }  }

return 0;
}                       