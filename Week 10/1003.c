#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char present[101][50];
  char name[50];
  int index = 0;
  int i;
  for (i = 0; i < n; i++) {
    int op;
    scanf("%d", &op);
    switch (op) {
      case 1:
        scanf("%s", present[index++]);
        break;
        
      default:
        scanf("%s", name);
        printf("%s %s\n", name, present[--index]);
        break;
    }
  }
}