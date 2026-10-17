#include <stdio.h>
//for generating a random number we need to add two random files
#include <stdlib.h>
#include <time.h> 

int main() {
    int random, guess;
    int no_of_guess = 0;
    //now step 2 is seeding random number
    srand(time(NULL));  // algorithm for genrating a ramdom no.

    printf("\nWelcome to the world of guessing numbers");
    random = (rand() % 100) + 1;
    do {
        printf("\nPlease enter your Guess number between (1 to 100): ");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random) { 
            printf("Guess a larger number\n");
        } else if (guess > random) {
            printf("Guess a smaller number:\n");
        } else { 
            printf("Congratulations!!!! You have successfully guessed the number in %d attempts.\n", no_of_guess);
        }
    } while (guess != random);
       
    printf("\nBye Bye, Thanks for Playing!!\n");
    printf("Developed by Aarya\n");

    return 0;
} 