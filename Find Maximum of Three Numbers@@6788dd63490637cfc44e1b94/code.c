// Your code here...
#include <stdio.h>


int main() {
     int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b>c){
        printf("a");
    }
    else if(a<b<c){
        printf("c");
    }
    else{
        printf("b");
    }
    return 0;
}