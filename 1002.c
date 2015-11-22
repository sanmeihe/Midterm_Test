// Problem#: 16452
// Submission#: 4153219
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h> 

int main() {
    int n;
    while( scanf("%d", &n) != 0) {
        if(n == 0)
        break;
        int i, j;
        bool flag = false;
        scanf("%d%d", &i,&j);
        for(int m = 1 ; m <= n ; m++) {
            if(m % i == 0 && m % j == 0 && flag == false){
                printf("%d", m);
                flag = true;
            } else if (m % i == 0 && m % j == 0 && flag == true) {
                printf(" %d",m);
            }
        }
        if(flag == false)
        printf("-1");
        printf("\n");
    }
    
    return 0;
}                                 