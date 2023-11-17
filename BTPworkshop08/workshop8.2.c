#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Workshop 08 - Cody MacDonald

const char answers[8][64] = {
    "Yes, definitely", "Maybe",
    "Don't count on it", "Without a doubt",
    "Ask again later", "Outlook not so good",
    "Better not tell you now", "My sources say no"
};

int randomIndex(int indexMax);
void printRandomAnswer(int index);
void storeLog(char(*questionLog)[64], char(*answerLog)[64], int logIndex, char tempQuestion[64], int tempAnswerIndex);
void printLog(char(*questionLog)[64], char(*answerLog)[64], int logIndex);
void fortuneAccuracy();

int main()
{
    char questionLog[16][64]; // Storing old questions
    char answerLog[16][64]; // Storing old answers
    int logIndex = 0; // For counting log index
    char tempQuestion[64] = {}; // Storing question per loop
    int tempAnswerIndex = 0; // Storing random index per loop
    int flag = 1;

    printf("Welcome to the 8-Ball Fortune Teller\n");
    printf("-------------------------------------\n");
    printf("Ask a question or type quit to leave\n\n");

    while (flag)
    {
        if (logIndex < 16)
        {
            printf("Enter a question: "); // Enter a Question
            scanf(" %[^\n]", &tempQuestion); // Storing Question in temp
            while (getchar() != '\n'); // Clearing Buffer
            if (!strcmp(tempQuestion, "quit"))
            {
                flag = 0;
            }
            else
            {
                printf("Question: %s\n", tempQuestion); // Printing question
                tempAnswerIndex = randomIndex(8);
                printRandomAnswer(tempAnswerIndex); // Printing answer
                storeLog(questionLog, answerLog, logIndex, tempQuestion, tempAnswerIndex); // Storing question and answer
                logIndex++; // increasing log index
            }
        }
        else
        {
            flag = 0;
        }
    }
    printf("-------------------------------------\n");
    fortuneAccuracy();
    printLog(questionLog, answerLog, logIndex); //Printing log

    return 0;
}

int randomIndex(int indexMax)
{
    time_t seed = time(NULL); // Grabbing current time
    srand(seed); // Creating a random seed based on the time
    int index = rand() % indexMax; // Calling a random int with a range of 0 - 7
    return index; // return index from answers array
}

void printRandomAnswer(int index)
{
    printf("Answer: %s\n", answers[index]); // printing answer
}

void storeLog(char(*questionLog)[64], char(*answerLog)[64], int logIndex, char tempQuestion[64], int tempAnswerIndex)
{
    strcpy(questionLog[logIndex], tempQuestion); // storing tempQuestion into log
    strcpy(answerLog[logIndex], answers[tempAnswerIndex]); // storing tempanswer into log
}

void printLog(char(*questionLog)[64], char(*answerLog)[64], int logIndex)
{
    printf("\nHere is the log of our conversation:\n");
    for (int i = 0; i < logIndex; i++)
    {
        printf("Question: %s --- Answer: %s\n", questionLog[i], answerLog[i]);
    }
}

void fortuneAccuracy()
{
    int percentage;
    percentage = randomIndex(10) + 90;
    printf("The fortunes accuracy are %d%% accurate\n", percentage);
}