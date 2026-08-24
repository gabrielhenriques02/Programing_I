#include <stdio.h>
//Find Largest of Three Numbers.

int main(){
    int A = 0, B = 0, C = 0;
   
    //loop until typeing three diferent variables.
    while(A == B || A == C || B == C){
        printf("type three diferent integer\n");
        printf("Type A (integer): ");
        scanf("%d", &A);
        printf("Type B (integer): ");
        scanf("%d", &B);
        printf("Type C (integer): ");
        scanf("%d", &C);
        printf("\n");
    }

    //Checking the greatest.
    if (A > B && A > C){
        printf("A (%d) is the largest number.\n", A);
    }
    else if (B > A && B > C){
        printf("B (%d) is the largest number.\n", B);
    }
    else if (C > A && C > B) {
        printf("C (%d) is the largest number.\n", C);
    }

}