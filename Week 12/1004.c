#include <stdio.h>
#include <string.h>

int indexOf(const char *s1, const char *s2) {
  const char *st = strstr(s2, s1);
  if (st) {
    return (int)(st-s2);
  }
  return -1;
}

int main() {
  char s1[5] = "ah";
  char s2[10] = "haha";
  printf("%d\n", indexOf(s1, s2));
}