// Your code here...
#include<stdio.h>
int main(){
    int r, c, N,j;
    scanf("%d",&N);
    for(r=0; r<N; r++){
        j=1
        for(c=0; c>=r; c++){
            printf("* ");
        }
    }
    return 0;
}