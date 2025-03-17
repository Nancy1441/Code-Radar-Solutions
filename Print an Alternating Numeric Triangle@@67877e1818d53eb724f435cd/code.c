// Your code here...
#include<stdio.h>
 int main(){
    int r,c,N,num=1;
    scanf("%d", &N);
    for( r=1; r<=N; r++){
        for(c=1; c<=r;c++){
            printf("%d ",num%2);
            num++;
            }
        printf("\n");
    }
    return 0;
 }