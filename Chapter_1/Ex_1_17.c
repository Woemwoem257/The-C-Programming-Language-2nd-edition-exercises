#include <stdio.h>

#define MAXLINE 1000  // Maximum length of an input line

// Function to read a line of text
int getline(char line[], int maxline);

int main(void) {
    int len;          // Length of the current line
    char line[MAXLINE];  // Array to hold the current input line

    // Read lines until EOF and print lines longer than 80 characters
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > 80) {
            printf("%s", line);  // Print the line if its length is greater than 80
        }
    }

    return 0;
}

// getline: read a line into 's', return the length of the line
int getline(char s[], int lim) {
    int c, i;
    
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';  // Null-terminate the string
    return i;  // Return the length of the line
}
