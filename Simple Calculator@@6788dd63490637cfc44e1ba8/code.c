#include <stdio.h>

int main() {
   int a,b;
   char ch;
   scanf("%d %d %c", &a,&b,&ch);
  switch(ch){
    case '+': printf("%d\n",a+b); break;
    case '-': printf("%d\n",a-b); break;
    case '*': printf("%d\n",a*b); break;
    case '/': if(b==0){
        printf("erroe");
    }
    else{
        printf("%d\n",a/b);
    } break;
    default: printf("Error");
  }
  
    return 0;
}