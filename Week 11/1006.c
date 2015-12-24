#include <stdio.h>
char a = '1', b = '2', c = '3';
void move(char a, char b) {
    printf("%d%d\n", a-48, b-48);
}
void hannuota(int n, char a, char b, char c) {
    if (n == 1) 
    move(a, c);
    else { 
    hannuota(n - 1,a, c, b);
    move(a,c);
    hannuota(n - 1, b, a, c);
}
}
int main() {
int n;
scanf("%d", &n);
hannuota(n, a,b, c);
return 0;
}         