#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(void) {
    float raio, area;
    printf("digite o raio: ");
    scanf("%f", &raio);

    area = PI*raio*raio;

    printf("a área é: %.2f\n", area);
}