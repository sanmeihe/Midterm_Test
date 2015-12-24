#include <stdio.h>
#include <string.h>

void multiply3(int st[200]) {
  int i = 199;
  while (st[i] != -1) {
    st[i--] *= 3;
  }
  i = 199;
  while (st[i] != -1) {
    int temp = st[i];
    st[i] = temp%10;
    if (st[i-1] != -1) {
      st[i-1] += temp/10;
    } else {
      if (temp/10) {
        st[i-1] = temp/10;
        break;
      }
    }
    i--;
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int result[200];
  int i;
  for (i = 0; i < 200; i++) {
    result[i] = -1;
  }
  result[199] = 3;
  for (i = 1; i < n; i++) {
    multiply3(result);
  }
  for (i = 0; i < 200; i++) {
    if (result[i] != -1) {
      printf("%d", result[i]);
    }
  }
  printf("\n");
}