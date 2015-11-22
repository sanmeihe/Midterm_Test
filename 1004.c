// Problem#: 16451
// Submission#: 4153304
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h> 

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        double m = 0;
        scanf("%lf", &m);
        float y;
        if(m < 0 ) {
            y = 2 * m + 5;
        } else if(m >= 0 && m < 10) {
            y = m * m  - m + 3;
        } else if( m >= 10) {
            y = m*m*m - 7 * m;
        }
        printf("%.2f\n",y);
    }
    

    
    return 0;
}                                 