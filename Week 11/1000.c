#include <stdio.h>
int add2(int a) {
    return a+2;
}
int minus(int a) {
    return a-1;
}
int a;
int main() {
    scanf("%d", &a);
    a=add2(a);
    a=minus(a);
    printf("%d",a);
    return 0;
}                 