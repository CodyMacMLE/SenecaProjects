#include <stdio.h>
#include <string.h>

struct assignment {
  int id;
  char name[32];
  float grade;
  float weight;
};

int main () {

  char menuCharacter;
  struct assignment assignments[50] = {{'Workshop', 100, 50}, {'Test', 90, 50}};
  float remainingWeight;
  float finalGrade;
  int assignmentsIndex = 2;
  int selectedIndex;

  do
  {
    printf("-----------------------------\n"); // Menu
    printf("Student Grade Calculator\n");
    printf("1) Add Assignment (+)\n");
    printf("2) Edit Assignment (e)\n");
    printf("3) Display Assignments (d)\n");
    printf("4) Calculate Grade (=)\n");
    printf("5) Exit App (x)\n");
    printf("-----------------------------\n");
    
    printf("Enter Option: "); // Menu Input
    scanf("%c", &menuCharacter);
    while (getchar() != '\n'); // Clearing Buffer
    printf("-----------------------------\n");

    switch (menuCharacter)
    {
    case '+':
      printf("1) Adding Assigment\n");

      assignments[assignmentsIndex].id = assignmentsIndex + 1;
      
      printf("Enter Assignment Name: ");
      scanf("%s", &assignments[assignmentsIndex].name);
      while (getchar() != '\n');

      printf("Enter Assignment Grade (Only Integers of %%): ");
      scanf("%f", &assignments[assignmentsIndex].grade);
      while (getchar() != '\n');

      printf("Enter Assignment Weight (Only Integers of %%): ");
      scanf("%f", &assignments[assignmentsIndex].weight);
      while (getchar() != '\n');
      
      assignmentsIndex++;
      break;
    
    case 'e':
      if (assignmentsIndex > 0)
      {
        printf("2) Editing Assigment\n");

        printf("Select Assignment Number (1 to %d): ", assignmentsIndex);
        scanf("%d", &selectedIndex);
        while (getchar() != '\n');
        
        printf("Enter Assignment Name: ");
        scanf("%s", &assignments[selectedIndex-1].name);
        while (getchar() != '\n');

        printf("Enter Assignment Grade (Only Integers of %%): ");
        scanf("%f", &assignments[selectedIndex-1].grade);
        while (getchar() != '\n');

        printf("Enter Assignment Weight (Only Integers of %%): ");
        scanf("%f", &assignments[selectedIndex-1].weight);
        while (getchar() != '\n');
      } else {
        printf("Error: No Assignments to Edit\n");
      }
      break;

    case 'd':
      if (assignmentsIndex > 0)
      {
        printf("3) Displaying Assigments\n\n");

        for (int i = 0; i < assignmentsIndex; i++)
        {
          printf("%d) %s - Grade:%.2f%% - Weight:%.2f%%\n",i+1, assignments[i].name, assignments[i].grade, assignments[i].weight);
        }
      } else {
        printf("Error: No Assignments to Display\n");
      }
      break;
    
    case '=':
    if (assignmentsIndex > 0)
      {
        printf("4) Calculating Grade\n\n");
        //finalGrade =
        float totalWeight = 0;
        for (int i = 0; i < 50; i++)
        {
          totalWeight += assignments[i].weight;
        }
        remainingWeight = (100 - totalWeight) * 100;
        finalGrade = remainingWeight;

        for (int i = 0; i < 50; i++)
        {
        finalGrade += assignments[i].weight*assignments[i].grade;
        }
        
        printf("Final Grade: %.2f\n", finalGrade);

      } else {
        printf("Error: No Assignments to Calculate\n");
      }
    break;

    default:
      break;
    }



  } while (menuCharacter != 'x');

  printf("Terminating App");
  
  return 0;
}