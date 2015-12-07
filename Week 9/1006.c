// Problem#: 16523
// Submission#: 4196529
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
#include <math.h>
int main() {
    int n,i; double a,b,c;
    scanf("%d",&n);
     for(i=1;i<=n;i++)
       {
         scanf("%lf%lf%lf",&a,&b,&c);
          if(fabs(c-a-b)<0.0000000001)
            printf("Yes\n");
            else printf("No\n");
 }
    return 0;
}                                 