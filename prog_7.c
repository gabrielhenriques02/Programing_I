#include <stdio.h>
// Leap year check

int main() {

    int year = 0;

    printf("type the year: ");
    scanf("%d", &year);
    printf("\n");

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a LEAP YEAR.\n", year);
    }
    else {
        printf("%d is not a LEAP YEAR.\n", year);
    }
}