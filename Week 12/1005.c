#include <string.h>
int * count(const char * consts) {
  static int count[10];
  int i;
  for (i = 0; i < 10; i++) {
    count[i] = 0;
  }
  for (i = 0; i < strlen(consts); i++) {
    if (consts[i] >= '0' && consts[i] <= '9') {
      count[consts[i]-'0']++;
    }
  }
  return count;
}