#include <stdio.h>
#include <string.h>

int main() {
  char inputArray[20];
  char reversed[20];
  //char reversedArray[20];

  // Taking String Input
  printf("Input a string to be reversed (20 or less characters):");
  fgets(inputArray, 20, stdin);
  inputArray[strlen(inputArray) - 1] = '\0';
  

  // Checking User Input
  while (strlen(inputArray) == 0)
  {
    printf("You did not input a string!");
    printf("\nInput a string to be reversed (20 or less characters): ");
    fgets(inputArray, 20, stdin);
    inputArray[strlen(inputArray) - 1] = '\0';
  }

  // Iterating through string, reversing, and appending
  for (int i = strlen(inputArray); i >= 0; i--)
  {
    int rIndex = 0;
    reversed[rIndex] = inputArray[i];
    rIndex++;
  }

  printf("\nYour reversed string: %s", reversed);

  return 0;
}
