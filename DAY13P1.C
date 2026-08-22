// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() {
    char op;
    float a, b, result;

    printf("enter first number: ");
    scanf("%f", &a);

    printf("enter operator (=, -, *, /, %%): ");
    scanf("%c", &op);

    printf("enter second number : ");
    scanf("%f", &b);

    switch (op) {
        case '+':
        result = a + b;
        printf("result = %.2f",result );
        break;

        case '-':
        result = a - b;
        printf("result = %.2f", result);
        break;

        case '/':
        if (b != 0)
        printf("result = %.2f", a / b);
        else
            printf("error: Division by zero!");
        break;
        case '%' :
            printf("result = %d", (int)a % (int)b);
            break;

            default:
            printf("invalid operater!");
        
            }
            return 0;
}