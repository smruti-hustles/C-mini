#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame();

int main() {
    char play_again;
    printf("Hey Guys!!! Welcome to the 'Guess the Number' game. I hope you enjoy it 👍\n");

    do {
        playGame();
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &play_again);
    } while (play_again == 'y' || play_again == 'Y');

    printf("Thanks for playing! Goodbye!\n");
    return 0;
}

void playGame() {
    int secret_num, guess_num, i, guess_limit = 3;
    
    //Let computer generate some random number
    // Initializing random number generator
    srand(time(0));
    secret_num = rand() % 10 + 1; // Generating a random number between 1 and 10

    printf("\nI have selected a number between 1 and 10. Can you guess it?\n");

    for (i = 1; i <= guess_limit; i++) {
        printf("*** Guess the number ***\n");
        while (scanf("%d", &guess_num) != 1) {
            printf("Invalid input. Please enter a number: ");
            while (getchar() != '\n'); // Clear invalid input
        }

        if (guess_num == secret_num) {
            printf("Hurray!! You guessed it right!\n");
            break;
        } else {
            if (guess_num > secret_num) {
                printf("Too high!\n");
            } else {
                printf("Too low!\n");
            }
            printf("You have %d chances left.\n", (guess_limit - i));
        }
    }

    if (guess_num != secret_num) {
        printf("\nYou lost!!! The correct number was %d.\nBetter luck next time!\n", secret_num);
    }
}
