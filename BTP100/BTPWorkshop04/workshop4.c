#include <stdio.h>

// Workshop 04 - Cody MacDonald

int main(){
  char userOption;

  do
  {
    printf("\nEnter an option:\n1) Countdown from 10 (d)\n2) Countup to 10 (u)\n3) Exit (x)\n");
    scanf("%c", &userOption); // Collecting User Input
    while ((getchar()) != '\n'); // Clearing Buffer

    switch (userOption)
    {
    case 'd': // Count down loop (10 - 0)
      for (int i = 10; i >= 0; i--)
      {
        printf("%d ", i);
      }
      printf("%s", "\n");
      break;
    
    case 'u': // Count up loop (0 - 10)
      for (int i = 0; i <= 10; i++)
      {
        printf("%d ", i);
      }
      printf("%s", "\n");
      break;
    
    case 'x': // case is used so default is not called and continues to while conditional
      continue;
      break;
    
    default: // non-valid character being entered
      printf("Please enter a valid character!\n");
      break;
    }

  } while (userOption != 'x'); // 'x' user input is the exit character

  printf("Exiting application!");
  return 0;
}