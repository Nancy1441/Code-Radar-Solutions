// Your code here...
#include<stdio.h>
int main(){
    int n,i,count;
    scanf("%d",&n);
    for(i=1;i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        print("Not Prime");
    }
}