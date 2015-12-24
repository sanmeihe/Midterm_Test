#include <string.h>
int countLetters(const char * consts) {
  int count;
  int i;
  for (i = 0; i < strlen(consts); i++) {
    if ((consts[i] >= 'a' && consts[i] <= 'z') ||
        (consts[i] >= 'A' && consts[i] <= 'Z')) {
      count++;
    }
  }
  return count;
}