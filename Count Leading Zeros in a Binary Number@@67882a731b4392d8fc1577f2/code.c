// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",num==0?32:
    __builtin_clz(num));
    return 0;
}