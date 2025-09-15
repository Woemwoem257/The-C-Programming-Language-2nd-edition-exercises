#include <stdio.h>

#define MAX_CHARACTERS 256  // Number of possible characters (ASCII)

int main() {
    int c;
    int frequency[MAX_CHARACTERS] = {0};  // Array to store frequency of each character

    // Read input character by character
    while ((c = getchar()) != EOF) {
        frequency[c]++;  // Increment the frequency count for this character
    }

    // Print the histogram
    printf("Character Frequency Histogram:\n");
    for (int i = 0; i < MAX_CHARACTERS; i++) {
        if (frequency[i] > 0) {  // Only print characters that appear in the input
            printf("'%c' (%d): ", i, frequency[i]);

            // Print stars corresponding to the frequency of the character
            for (int j = 0; j < frequency[i]; j++) {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}
