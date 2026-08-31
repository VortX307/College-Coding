//A program to use and learn escape sequences in c.
#include <stdio.h>
#include <unistd.h> // Used for sleep()

int main() {
    printf("--- Demonstration of C Escape Sequences ---\n\n");

    // Newline and tab
    printf("1. Newline and Tab:\n");
    printf("\tItem 1\n\tItem 2\n\tItem 3\n\n");

    // 2. Backspace (Removing X)
    printf("2. Backspace:\n");
    printf("ErrorX\b occurred.\n\n");

    // 3. Single and Double quote
    printf("3. Quotes:\n");
    printf("He said, \"It\'s a beautiful day!\"\n\n");

    // 4. Backslash 
    printf("4. Backslash:\n");
    printf("The file path is C:\\Program Files\\MyCode\n\n");

    // 5. Alert (to get beep)
    printf("5. Alert Sound (Check your speakers):\n");
    printf("Warning!\a\n\n");

    // 6. Carriage Return
    printf("6. Carriage Return:\n");
    printf("Loading: 0%%");
    fflush(stdout); // Force the output to display immediately
    sleep(1);       // Pause for 1 second to see the effect
    
    printf("\rLoading: 100%%\n"); // \r moves the cursor back to the start to overwrite "0%"
    
    return 0;
}