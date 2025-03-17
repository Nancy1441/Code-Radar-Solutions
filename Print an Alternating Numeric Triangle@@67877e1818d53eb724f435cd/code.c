#include<stdio.h>
int main(){
    int r, c, N;
    scanf("%d", &N); // Input the number of rows
    for(r = 1; r <= N; r++) {
        for(c = 1; c <= r; c++) {
            printf("%d ", (r + c) % 2); // Alternating 1 and 0 based on the sum of row and column indices
        }
        printf("\n");
    }
    return 0;
}
