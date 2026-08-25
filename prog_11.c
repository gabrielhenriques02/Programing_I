#include <stdio.h>

int main() {

    int n;
    int sum = 0;

    printf("Chose the 'n' of first integers you want to sum: ");
    scanf("%i", &n);

    for(int i = 0; i < n; i++){
        sum += i + 1;
    }
    
    printf("The sum of the first '%i' natural numbers are: %i\n", n, sum);
}