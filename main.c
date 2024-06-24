// Including operations/functions/features in C programming
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// starting the main function (everything starts here)
int main()
{
    const int MIN = 10;
    const int MAX = 60;
    int guess = 0;
    int answer;
    int guessing;
    int scanf_result;

    // Guessing numbers between 1 and 60
    srand(time(0));
    guessing = (rand() % MAX) + MIN;

    do
    {
        printf("\nType a number between 1 and 60: ");
        scanf_result = scanf("%d", &answer);

        if (scanf_result != 1)
        {
        printf("\nInvalid number or data! Please enter a number between 1 and 60.\n");
        return 1;
        }

        guess++;

        if(answer > guessing)
        {
            printf("Too high!\n");
        }
        else if(answer < guessing)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("\n__________________________________\n");
            printf("Great! You got the right number, which is: %d\n", guessing);
            printf("Attempts: %d", guess);
            printf("\n__________________________________\n");
        }
    }
    while (answer != guessing);
    
    return 0;
}