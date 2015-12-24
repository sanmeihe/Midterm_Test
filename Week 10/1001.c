#include <stdio.h>

int main() {
  int n, m;
  while (scanf("%d %d", &n, &m) != EOF) {
    char st[100];
    int i, j;
    for (i = 0; i < n; i++) {
      scanf("%s", st);
      for (j = m-1; j >= 0; j--) {
        switch (st[j]) {
          case 'b':
            printf("%c", 'd');
            break;
            
          default:
            printf("%c", st[j]);
            break;
        }
      }
      printf("\n");
    }
    printf("\n");
  }
}