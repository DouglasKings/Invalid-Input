#include <stdio.h>

// Function prototype declaration
int readInteger();

int main() {
    int num;
    
    // Call the function to get a valid integer from the user
    num = readInteger();
    
    printf("You entered: %d\n", num);
    return 0;
}

// Function definition
int readInteger() {
    int input;
    
    // Keep asking for input until a valid integer is entered
    do {
        printf("Please enter an integer: ");
        if (scanf("%d", &input) != 1) { // Check if scanf returned 1 (success)
            printf("Invalid input! Please enter an integer.\n");
            // Clear the input buffer to ignore the invalid input
            while(getchar() != '\n'); 
        }
    } while (scanf("%d", &input) != 1); // Repeat until a valid integer is entered
    
    return input; // Return the valid integer
}
