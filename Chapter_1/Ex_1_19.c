#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char s[]);

int main()
{
    int len;
    char line[MAXLINE];

    // Read input line by line
    while ((len = getline(line, MAXLINE)) > 0) {
        reverse(line);  // Reverse the line
        printf("%s\n", line);  // Print the reversed line   
    }

    return 0;
}

// getline: Reads a line from input and returns its length
int getline(char s[], int lim)
{
    int c, i;

    // Read characters until EOF, newline, or limit
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    // If newline, store it and increment the counter
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    // Null-terminate the string
    s[i] = '\0';

    return i;
}

// reverse: Reverses the string in place
void reverse(char s[])
{
    int length = 0;
    int i;
    char temp;

    // Calculate the length of the string
    while (s[length] != '\0') {
        length++;
    }

    // Reverse the string in place
    for (i = 0; i < length / 2; i++) {
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}
