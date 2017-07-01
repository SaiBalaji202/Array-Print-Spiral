#include<stdio.h>
#define N 4

int main() {
    int a[N][N] = {
        1, 2, 3, 4, 
        5, 6, 7, 8, 
        9, 10, 11, 12, 
        13, 14, 15, 16
    };
    int s, e, i;
    
    for(s = 0, e = N - 1; s <= e; s++, e--){
        //row fix, col inc
        for(i = s; i <= e; i++)
            printf("%d ", a[s][i]);
        //row inc, col fix
        for(i = s + 1; i <= e; i++)
            printf("%d ", a[i][e]);
        //row dec, col fix
        for(i = e - 1; i >= s; i--)
            printf("%d ", a[e][i]);
        //row fix, col dec
        for(i = e - 1; i >= s + 1; i--)
            printf("%d ", a[i][s]);
    }
    printf("\n");
    return 0;
}