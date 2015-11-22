// Problem#: 16446
// Submission#: 4153087
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h> 

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 2; i <= n ; i++) {
        if(n % i == 0) {
            printf("%d\n", i);
            n = n / i;
            i = 1;
            continue;
        }
    }
    return 0;
}                                 