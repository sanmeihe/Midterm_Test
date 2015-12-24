#include <stdio.h>
#include <string.h>

int main() {
  char exp[11];
  while (scanf("%s", exp) != EOF) {
    size_t i;
    for (i = 0; i < strlen(exp); i++) {
      if (exp[i] == '+' || exp[i] == '-') {
        break;
      }
    }
    char numst1[11], numst2[11];
    int num1, num2;
    size_t j;
    for (j = 0; j < i; j++) {
      numst1[j] = exp[j];
    }
    numst1[j] = '\0';
    for (j = i+1; j < strlen(exp)+1; j++) {
      numst2[j-i-1] = exp[j];
    }
    num1 = atoi(numst1);
    num2 = atoi(numst2);
    switch (exp[i]) {
      case '+':
        printf("%d\n", num1+num2);
        break;
        
      default:
        printf("%d\n", num1-num2);
        break;
    }
  }
}