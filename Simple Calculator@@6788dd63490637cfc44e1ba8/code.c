#include <stdio.h>

int main() {
    int a, b;
    char ch;

    // Taking input in the required format
    printf("Enter two integers and an operator (e.g., 5 3 +): ");
    scanf("%d %d %c", &a, &b, &ch);

    switch (ch) {
        case '+': 
            printf("%d\n", a + b); 
            break;
        case '-': 
            printf("%d\n", a - b); 
            break;
        case '*': 
            printf("%d\n", a * b); 
            break;
        case '/': 
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", a / b);
            } 
            break;
        default: 
            printf("Error: Invalid operator\n");
    }

    return 0;
}