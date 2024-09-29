#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_number, guess, attempts = 0;
    srand(time(0)); // Seed the random number generator
    random_number = rand() % 100 + 1; // Generate a number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");

    do
    {
        printf("Guess a number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>random_number){
            printf("choose a lower number please\n");
        }
        else if(guess<random_number){
            printf("choose a higher number\n");
        }
        else{
            printf("Correct guess\n");
        }
        attempts++;

    } while(guess!=random_number);

        printf("You guessed the number in %d attempts",attempts);

        return 0;
}