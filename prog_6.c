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

    if (A > B && A > C){
        printf("A (%d) is the largest number.\n", A);
    }
    else if (B > A && B > C){
        printf("B (%d) is the largest number.\n", B);
    }
    else if (C > A && C > B) {
        printf("C (%d) is the largest number.\n", C);
    }
    //TODO: loop to make shore that all number are diferent.

}