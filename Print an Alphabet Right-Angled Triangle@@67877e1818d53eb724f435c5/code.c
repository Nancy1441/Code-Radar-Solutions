// Your code here...
#include <stdio.h>

int main() {
   int r, c, N;
   scanf("%d", &N);
   for (r = 1; r <= N; r++) {
      for (c = 1; c <= r; c++) {
         printf("%c ", 65+c);
      }
      printf("\n");
   }
   return 0;
}