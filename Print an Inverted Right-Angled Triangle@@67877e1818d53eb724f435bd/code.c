// Your code here...
#include<stdio.h>
int main(){
    int r, c, rows;
    scanf("%d",&rows);
    for(r=0; r<rows; r++){
        for(c=0; c<r; c++){
            printf(*);
        }
    }
    return 0;
}