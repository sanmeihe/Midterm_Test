// Problem#: 16522
// Submission#: 4196512
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
int a[201][201][201];
int main() {
int n,m,i,j,k,x;
scanf("%d%d",&n,&m);
for(x=1;x<=n;x++) {
    scanf("%d%d%d",&i,&j,&k);
     a[i][j][k]=1;
}
for(x=1;x<=m;x++) {
    scanf("%d%d%d",&i,&j,&k);
     if (a[i][j][k]==1)
        printf("Yes\n");
     else printf("No\n");
}
return 0;
}                                 