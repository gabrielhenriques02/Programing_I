#include <stdio.h>
// Leap year check

int main() {

    int year;

    printf("type the year: ");
    scanf("%i", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%i is a LEAP YEAR.\n", year);
    }
    else {
        printf("%i is not a LEAP YEAR.\n", year);
    }
}