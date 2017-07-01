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
    
    //Here we want to keep track of two things start and end
    //First we want to start from first row first value.  So, here we set s to 0.  Then we set end to N - 1.  Since the array index starts from 0, usually the end will be N - 1, where N is the total no of rows and columns in your array.
    //On each cycle we want to go one step down in row and one step righ in column.  Here a Cycle has 4 parts.
    //When start and end reach, our spiral ends
    for(s = 0, e = N - 1; s <= e; s++, e--){
        //Ist Part of Cycle:
            //Navigate Current Row Fully, upto e
            //row fix, col inc (row fix, because we are navigating through the row from left to right)
        for(i = s; i <= e; i++)
            printf("%d ", a[s][i]);
        //IInd Part of Cycle:
            //Navigate current end column fully
            //row inc, col fix (col fix, because we are navigating through the end column from top to bottom)
        for(i = s + 1; i <= e; i++)
            printf("%d ", a[i][e]);
        //IIIrd Part of Cycle:
            //Navigate current end column fully
            //row fix, col change (col change, because we are navigating through the row from right to left)        
        for(i = e - 1; i >= s; i--)
            printf("%d ", a[e][i]);
        //IVth Part of Cycle:
            //Navigate current first row fully
            //row dec, col fix (col fix, because we are navigating through the start column from bottom to top)        
        //row dec, col fix
        for(i = e - 1; i >= s + 1; i--)
            printf("%d ", a[i][s]);
    }
    printf("\n");
    return 0;
}
