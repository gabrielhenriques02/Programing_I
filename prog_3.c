#include <stdio.h>

int main() {
    int a, b, c;
    printf("digite o valore de a: ");
    scanf("%i", &a);
    printf("digite o valor de b: ");
    scanf("%i", &b);
    c = a;
    a = b;
    b = c;
    printf("a = %i\nb = %i\n", a, b);
}