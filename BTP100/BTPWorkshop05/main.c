#include <stdio.h>

//Workshop 05 - Cody MacDonald

struct student
{
  int id;
  float gpa;
  char email[32];
};

int main() 
{

  struct student BTP100[30] = {
    {1, 3.2, "john.smith@myseneca.ca"},
    {2, 3.5, "karen.patel@myseneca.ca"},
    {3, 3.6, "kim.xiang@myseneca.ca"}}; // Initializing student struct array
  int classSizeBTP100 = 3; // Students in class BTP100
  char menuCharacter; // Variable to exit/choose function in menu
  int studentIndex; // Variable to access specific student id

  do
  {
    // Implementing menu options
    printf("Student Database Options:\n");
    printf("1) Print all student info (a)\n2) Print a single student (o)\n3) Add a new student (+)\n4) Edit an existing student (e)\n5) Exit program (x)\n");
    printf("Enter:");
    scanf("%c", &menuCharacter);
    while (getchar() != '\n')
    printf("\n");
    printf("\n");

    switch (menuCharacter)
    {
    case 'a':
      printf("All Student Info:\n");
      for (int i = 0; i < classSizeBTP100; i++)
      {
        printf("Student %d: {GPA: %.1f, Email: %s}\n", BTP100[i].id, BTP100[i].gpa,BTP100[i].email);
      }
      printf("\n\n");
      break;

    case 'o':
      printf("Enter a student index from 0 to %d (negative prints all): ", classSizeBTP100 - 1);
      scanf("%d", &studentIndex); // Grabbing student id
      while(getchar()!='\n'); // Clearing the Buffer
      if (0 <= studentIndex && studentIndex < classSizeBTP100) // making sure index choosen was within the size of the class
      {
        //index was inside = print that index
        printf("\nStudent Info:\n");
        printf("Student %d: {GPA: %.1f, Email: %s}\n\n", BTP100[studentIndex].id, BTP100[studentIndex].gpa,BTP100[studentIndex].email);
      } else if (studentIndex < 0) //index below 0 = print all students in class
      {
        for (int i = 0; i < classSizeBTP100; i++)
        {
          printf("Student %d: {GPA: %.1f, Email: %s}\n", BTP100[i].id, BTP100[i].gpa,BTP100[i].email);
        }
        printf("\n\n");
      } else {
        printf("\nIndex position was above class size\n\n"); // If index was above class size print error
      }
      break;

    case '+':
      if (classSizeBTP100 <= 30)
      {
        
        printf("Enter Student Information\nID:");
        scanf("%d", &BTP100[classSizeBTP100].id);
        while(getchar()!='\n'); // Clearing the Buffer
        printf("GPA:");
        scanf("%f", &BTP100[classSizeBTP100].gpa);
        while(getchar()!='\n'); // Clearing the Buffer
        printf("Email:");
        scanf("%s", &BTP100[classSizeBTP100].email);
        while(getchar()!='\n'); // Clearing the Buffer

        printf("You have added a student (index=%d)\n\n", classSizeBTP100);
        classSizeBTP100++;
      } else {
        printf("The class is at max capacity, you can not add another student\n\n");
      }
      break;

    case 'e':
      printf("Enter Student Index from 0 to %d:", classSizeBTP100 - 1);
      scanf("%d", &studentIndex);
      while(getchar()!='\n'); // Clearing the Buffer
      if (0 <= studentIndex && studentIndex < classSizeBTP100)
      {
        printf("Enter Student Information\nID:");
        scanf("%d", &BTP100[studentIndex].id);
        while(getchar()!='\n'); // Clearing the Buffer
        printf("GPA:");
        scanf("%f", &BTP100[studentIndex].gpa);
        while(getchar()!='\n'); // Clearing the Buffer
        printf("Email:");
        scanf("%s", &BTP100[studentIndex].email);
        while(getchar()!='\n'); // Clearing the Buffer

        printf("You have edited a student (index=%d)\n\n", studentIndex);
      } else {
        printf("You have entered an index over or under the limit.\n\n");
      }
      
      break;
    
    case 'x':
      printf("Exiting Application");
      break;
    
    default:
      printf("Invalid Character Entry. Please Enter a valid character\n\n");
      break;
    }
  } while (menuCharacter != 'x');
  
  return 0;
}