#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER 20
#define LOWER 1
#define FALSE 0
#define TRUE 1

int main()
{
    time_t t;
    srand((unsigned) time(&t)); //creates a random seed

    int upper_limit = UPPER;
    int lower_limit = LOWER;
    
    
    
    printf("Hello and welcome to my number guessing game!\n");
    

    int play_again = TRUE;
    while (play_again == TRUE)
    {
        int user_guess = 0;
        int rem_guesses = 5;
        int random_number = rand() % (upper_limit - lower_limit + 1) + lower_limit;
        printf("Please guess the magic number between %i and %i. \n \n", lower_limit, upper_limit);

        for(rem_guesses; rem_guesses > 0; rem_guesses--)
        {
            printf("\nYou have %i guesses left.\n", rem_guesses);
            int is_valid = FALSE; 

            while(is_valid == FALSE){
                printf("Please enter a valid number: ");
                scanf("%i", &user_guess);

                if (user_guess >= lower_limit && user_guess <= upper_limit)
                {
                    is_valid = TRUE;
                }
                else
                {
                    printf("Error! That number is not between %i and %i\n", lower_limit, upper_limit);
                }
            }

            if (user_guess == random_number)
            {
                printf("Congratualtions! You guessed the right number!\n");
                break;
            }
            else if(rem_guesses != 0 && user_guess < random_number)
            {
                printf("Sorry! %i is too low.\n \n", user_guess);
            }
            else if(rem_guesses != 0 && user_guess > random_number)
            {
                printf("Sorry! %i is too high.\n \n", user_guess);
            }
            

        }
        
        if(rem_guesses == 0)
            {
                printf("I'm sorry, you've ran out of guesses! \n");
            }

        printf("\nWould you like to play again? (1 for Y or 0 for N): ");
        scanf("%i", &play_again);
        
        if(play_again != TRUE)
        {
            printf("Thanks for playing! Good bye!");
        }

    }
}