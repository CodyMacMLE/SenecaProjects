#include <stdio.h>

// Workshop 02 - Cody MacDonald

int main() {
    int heightFeet, heightInches, heightMeters, heightCentimeters;
    float totalHeightCentimeters;

    // Accepting User Input
    printf("Enter your height in the following format (feet inches):\n");
    scanf("%d %d", &heightFeet, &heightInches);
    printf("You inputed %d feet %d inches.\n", heightFeet, heightInches);

    //Clearing Buffer
    while ((getchar())!='\n');

    //Converting imperial inputs to metric centimeters
    totalHeightCentimeters = (heightFeet*30.48)+(heightInches*2.54);
    //Seperating metric values
    heightMeters = (int)totalHeightCentimeters/100;
    heightCentimeters = totalHeightCentimeters-(heightMeters*100);

    //Print Results
    printf("You are %dm %dcm tall!", heightMeters, heightCentimeters);

    return 0;
}