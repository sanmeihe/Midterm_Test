// Problem#: 16519
// Submission#: 4196467
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
int main() {
   int i,j; float a[4][4],max,min;
   for(i=1;i<4;i++)
       for(j=1;j<4;j++)
             scanf("%f",&a[i][j]);
          min=a[2][2];
          max=a[2][2];   
 for(i=1;i<4;i++)  if(a[i][i]>max) max=a[i][i];      
 if(a[1][3]>min) min=a[1][3];      
 if(a[3][1]>min) min=a[3][1];          
     printf("%.1f %.1f ",max,min);
return 0;
}                                 