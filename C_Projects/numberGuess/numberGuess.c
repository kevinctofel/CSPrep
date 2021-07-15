#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t)); // initialize random function with seed
    int randNum = rand() % 21; // generate random number from 0 to 20
    int guess, numGuesses = 5;

    printf("Can you guess the number I picked between 0 and 20?\n");
    printf("You have %i guesses left.\n", numGuesses);

    while (numGuesses > 0)
    {
        printf("\nEnter your guess: ");
        scanf("%i", &guess); // user's guess
        while (guess < 0 || guess > 20)
        {
            printf("\nGuess must be between 0 and 20.\nEnter your guess: ");
            scanf("%i", &guess); // user's guess
        }
        numGuesses--;
        if (guess == randNum)
        {
            printf("You guessed it!\n");
            break;
        }
        else if (guess < randNum)
        {
            printf("\nMy number is higher.\nYou have %i guesses left.", numGuesses);
        }
        else
            printf("\nMy number is lower.\nYou have %i guesses left.\n", numGuesses);
    }
    if (guess != randNum) printf("\nSorry. My number was: %i.\n", randNum);
}