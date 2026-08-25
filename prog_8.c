#include <stdio.h>

int main() {

    float num1, num2;
    char operator;

    printf("Enter an operator (+,-,*,/): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch(operator){
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;
    }

    return 0;
}