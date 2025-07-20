#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);
    switch (op) {
        case '+': printf("%.1f + %.1f = %.1f", a, b, a + b); break;
        case '-': printf("%.1f - %.1f = %.1f", a, b, a - b); break;
        case '*': printf("%.1f * %.1f = %.1f", a, b, a * b); break;
        case '/': printf("%.1f / %.1f = %.1f", a, b, a / b); break;
        default: printf("Invalid operator"); break;
    }
    return 0;
}