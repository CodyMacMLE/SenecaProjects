#include <stdio.h>

// Workshop 01 - Cody MacDonald (BTP100NAA)

int main() {
    int variable1;
    int variable2;

    variable1 = 10;
    variable2 = 5;

    // Accepting variable 1
    printf("Enter an integer for variable 1: \n");
    scanf("%d", &variable1);

    // Clearing buffer
    while ((getchar()) != '\n');

    // Accepting variable 2
    printf("Enter an integer for variable 2: \n");
    scanf("%d", &variable2);

    // Clearing buffer
        // Since the program will end after accepting variable 2 is this necessary?
        // or does it stay in to maintain proper practice?
    while ((getchar()) != '\n');

    // Addition Results
    printf("Addition: %d + %d = %d\n", variable1, variable2, variable1 + variable2);
    // Subtraction Results
    printf("Subtraction: %d - %d = %d\n", variable1, variable2, variable1 - variable2);
    // Multiplication Results
    printf("Multiplication: %d * %d = %d\n", variable1, variable2, variable1 * variable2);
    // Division Results
    printf("Division: %d / %d = %d\n", variable1, variable2, variable1 / variable2);
    // Logic Comparison Results
    printf("Comparison: %d > %d = %d\n", variable1, variable2, variable1 > variable2);

    return 0;
}