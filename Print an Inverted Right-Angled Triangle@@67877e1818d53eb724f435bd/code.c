// Your code here...
#include<stdio.h>
int main(){
    int r, c, N;
    scanf("%d",&N);
    for(r=0; r<N; r++){
        for(c=0; c<r; c++){
            printf("* ");
        }
    }
    return 0;
}