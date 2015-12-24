#include <stdio.h>
#include <string.h>

char st[1001];
int main() {
  while (scanf("%s", st) != EOF) {
    char st1[1001], st2[1001];
    size_t alen = 0, blen = 0;
    size_t len = strlen(st);
    int i;
    for (i = 0; i < len; i++) {
      st1[alen++] = st[i];
      i++;
      if (i < len) {
        st2[blen++] = st[i];
      }
    }
    st1[alen] = '\0';
    st2[blen] = '\0';
    printf("%s,%s\n", st1, st2);
  }
}