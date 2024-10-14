#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}   

int main() {
    // Seed the random number generator
    srand(time(NULL));
    const int MAX_NUMBER = 100;
    
    // Generate a random number between 0 and 99
    int random_number = rand() % MAX_NUMBER;

    if (random_number < 50) {
        printf("Random number is less than 50\n");
    } else {
        printf("Random number is greater than or equal to 50\n");
    }

    for (int i = 0; i < MAX_NUMBER; i++) 
    {
        if (i == random_number) 
        {
            printf("random_number matched at index %d\n", i);
            break; 
        }
    }
    printf("Random number: %d\n", random_number);

    /*
        Code below asks for user input from user from STDIN/Console. Experiment with this. 
    */
    char input[10];
    const char* QUIT = "quit"; // quit command. 
    while (1) {
        printf("Enter a word: ");
        if (fgets(input, sizeof(input), stdin) == NULL) { // terminates if system fails to allocate memory or grab input from user. 
            break;
        }
        int idx = strcspn(input, "\n"); // grabs the index of the nearest new-line character. 
        printf("newline idx: %d\n", idx); 
        input[idx] = 0; // Remove newline and sets a terminating character. 
        if (strcmp(input, QUIT) == 0) {
            break;
        }
        printf("You entered: %s\n", input);
    }

    return 0;
}