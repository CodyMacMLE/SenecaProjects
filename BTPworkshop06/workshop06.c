#include <stdio.h>

// Workshop 06 - Cody MacDonald

int swap(int *pA, int *pB); // function prototype (making sure proper parameters are entered in main)

int main(){
  int a, b;

  printf("-----------------------------------\n");
  printf("Enter integer a: "); // User input for integer a
  scanf("%d", &a);
  while(getchar() != '\n');

  printf("Enter integer b: "); // User input for integer b
  scanf("%d", &b);
  while(getchar() != '\n');

  printf("Integer Input: %d & %d\n", a, b);
  printf("-----------------------------------\n");

  int swapOccurance = swap(&a, &b);

  printf("Integer Output: %d & %d\n", a, b);

  if (swapOccurance){
    printf("Your variables have been swapped!");
  } else {
    printf("Your variables have not been swapped!");
  }

  return 0;
}

int swap(int *pA, int *pB){
  int flag = 1;
  int c;

  if (*pA >= *pB)
  {
    flag = 0;
  } else {
    c = *pA;
    *pA = *pB;
    *pB = c;
  }
  
  return flag;
}