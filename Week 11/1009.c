#include <stdio.h>

int main() {
int n, i, a[201];
scanf("%d", &n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
void qsort(int a[], int left, int right);
qsort(a,0,n-1);
for (i = 0; i < n; i++)
printf("%d\n", a[i]);
    return 0;
}
void qsort(int a[], int left, int right) {
    int i, j, temp;
    i = left;
    j = right;
    temp = a[left];
if(left > right)
return;
 while(i!=j) {
while (a[j] > temp && j > i)
    j--;
if (j > i)   a[i] = a[j];
while (a[i] < temp && j > i)
 i++;
 if (j > i)
a[j--] = a[i];
}
a[i] = temp;
qsort(a, left, i - 1);
qsort(a, i + 1, right);
}     