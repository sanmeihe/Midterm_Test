// Problem#: 16511
// Submission#: 4154683
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        int position;
        char word[50];
        char *p = word;
        scanf("%d", &position);
        scanf("%s", p);
        for(int i = 0 ; i < strlen(p); i++) {
            if(i != position - 1) {
                word[i] = tolower(word[i]);
                printf("%c", word[i]);
            }
        }
        printf("\n");
    }

    return 0;
}                                 