#include <stdio.h>
//Enter a floating-point number (e.g., 3.14159): 75.35678
//The number rounded to two decimal places is: 75.36

int main(void) {
    double number;
    printf("digite um número decimal: ");
    scanf("%lf", &number);
    printf("O número arredondado para duas casas decimais é: %.2f\n", number);
}