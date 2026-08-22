#include <stdio.h>
//Find Largest of Three Numbers

int main(){
    int A, B, C;
    printf("Type A (integer): ");
    scanf("%d", &A);
    printf("Type B (integer): ");
    scanf("%d", &B);
    printf("Type C (integer): ");
    scanf("%d", &C);

    if (A > B){
        if(A > C){
            printf("A (%d) is the largest number.");
        }
    }

}