#include <stdio.h>
#include <string.h>
#define MAX 10010
int len;
char a[MAX];
int getnum(int l, int r) {
    int i, s = 0;
    for (i = l; i <= r; i++) {
        s = s * 10 + a[i] - '0';
    }
    return s;
}
int count(int l , int r) {
    int i, stot = 0, w = -1;
    if (a[l] != '(') return getnum(l, r);
    l++;r--;
    for (i = l; i <= r; i++) {
        if (a[i] == '(') ++stot;
        if (a[i] == ')') --stot;
if (stot == 0 && (a[i] == '+'||a[i]=='-'||a[i]=='*'||a[i]=='/')) {w = i; break; }
    }
    if (w == -1) return -getnum(l + 1, r);
    int x = count(l, w - 1), y = count(w + 1, r);
    if (a[w] == '+') return x + y;
    if (a[w] == '-') return x - y;
    if (a[w] == '*') return x * y;
    if (a[w] == '/') return x / y;
}
void solve() {
    while(scanf("%s",a) != EOF) {
        len = strlen(a);
        printf("%d\n",count(0, len - 1));
    }   
}
int main() {
    solve();
    return 0;
}        