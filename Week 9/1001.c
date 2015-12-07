// Problem#: 16515
// Submission#: 4196466
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
int main() {
   int i,j,a[4][4];
   for(i=1;i<4;i++)
       for(j=1;j<4;j++)
             scanf("%d",&a[i][j]);
 for(i=1;i<4;i++)
       for(j=1;j<4;j++)
           printf("%d ",a[j][i]);
return 0;
}                                 