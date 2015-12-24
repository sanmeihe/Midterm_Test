#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    double nums[100], sum = 0;
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
      scanf("%lf", &nums[i]);
      sum += nums[i];
    }
    double average = sum/n;
    int count = 0;
    for (i = 0; i < n; i++) {
      if (nums[i] > average) {
        count++;
      }
    }
    printf("%d\n", count);
  }
}