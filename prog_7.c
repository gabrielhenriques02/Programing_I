#include <stdio.h>
// Leap year check

int main() {

    int year;

    printf("type the year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a LEAP YEAR.\n", year);
    }
    else {
        printf("%d is not a LEAP YEAR.\n", year);
    }
}