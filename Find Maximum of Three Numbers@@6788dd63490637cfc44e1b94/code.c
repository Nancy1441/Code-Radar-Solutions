// Your code here...
#include <stdio.h>


int main() {
     int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b>c){
        printf("%d",a);
    }
    else if(a<b<c){
        printf("%d",c);
    }
    else if(a<b>c){
        printf("%d",b);
    }
    else{
        printf("no")
    }
    return 0;
}