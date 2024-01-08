#include <stdio.h>

// Workshop 03 – Cody MacDonald

int main() {
    // Declaring input variables
    float input1, input2, result;
    char operator;

    // INPUTS
    //input1
    printf("Input a number: ");
    scanf("%f", &input1);

    // Clearing Buffer
    while ((getchar())!='\n');

    // operator
    printf("Input an operator (+,-,*, or /): ");
    scanf("%c", &operator);

    // Clearing Buffer
    while ((getchar())!='\n');

    // input2
    printf("Input another number: ");
    scanf("%f", &input2);

    //Clearing Buffer
    while ((getchar())!='\n');

    // BASIC CALCULATOR

    /*

    if (operator == '+') {
        printf("Answer: %f + %f = %f", input1, input2, input1 + input2);
    } else if (operator == '-') {
        printf("Answer: %f - %f = %f", input1, input2, input1 - input2);
    } else if (operator == '*') {
        printf("Answer: %f * %f = %f", input1, input2, input1 * input2);
    } else if (operator == '/') {
        printf("Answer: %f / %f = %f", input1, input2, input1 / input2);
    } else {
        printf("Error: Invalid Operator");
    }

    */

    switch (operator)
    {
    case '+':
        result = input1 + input2;
        printf("Answer: %f + %f = %f\n", input1, input2, result);
        // Checking if result is less than 1 using ternary
        result < 1 ? printf("Result is less than 1") : printf("Result is more than or equal to 1");
        break;
     case '-':
        result = input1 - input2;
        printf("Answer: %f - %f = %f\n", input1, input2, result);
        // Checking if result is less than 1 using ternary
        result < 1 ? printf("Result is less than 1") : printf("Result is more than or equal to 1");
        break;
    case '*':
        result = input1 * input2;
        printf("Answer: %f * %f = %f\n", input1, input2, result);
        // Checking if result is less than 1 using ternary
        result < 1 ? printf("Result is less than 1") : printf("Result is more than or equal to 1");
        break;
    case '/':
        result = input1 / input2;
        printf("Answer: %f / %f = %f\n", input1, input2, result);
        // Checking if result is less than 1 using ternary
        result < 1 ? printf("Result is less than 1") : printf("Result is more than or equal to 1");
        break;
    default:
        printf("Error: Invalid Operator\n");
        break;
    }
    
    return 0;
}