// Your code here...
#include<stdio.h>
 int main(){
    int r,c,n;
    scanf("%d", &n);
    for( r=1; r<=n; r++){
        for(c=1; c<=(n-r); c++){
            printf(" ");
        }
        int nn;
        for(c=1; c<=(2*r-1);c++){
            printf("%d",nn);
            nn++;
        }
        printf("\n");
    }
    return 0;
 }