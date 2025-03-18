#include<stdio.h>
int main(){
    int  r,c,n;
    scanf("%d",&n);
    for(r=0; r<=n; r++){
        for(c=0; c<=r; c++){
            printf("%d", (r+c)%2);
        }
        printf("\n");
    }
    return 0;
}