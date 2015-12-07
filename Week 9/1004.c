// Problem#: 16521
// Submission#: 4196495
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
int main() {
    int n,i,j,k;
while(scanf("%d",&n)!=EOF) {
  int a[11][11]={0},b[11][11]={0},c[11][11]={0};
        for (j = 1; j <= n; j++)
           for (k = 1 ; k <= n; k++)
               scanf("%d", &a[j][k]);            
        for (j = 1; j <= n; j++)
           for (k = 1 ; k <= n; k++)
             scanf("%d", &b[j][k]);             
    for (i = 1 ; i <= n; i++)
           for (j = 1 ; j <= n; j++)
             for (k = 1 ; k <= n; k++) 
                  c[i][j] += a[i][k] * b[k][j];
        for (j = 1; j <= n; j++)
                 for (k = 1; k <= n; k++) {     
             printf("%d", c[j][k]);
             if (k < n) printf(" ");
             else printf("\n");  
}
}
    return 0;
}                                 