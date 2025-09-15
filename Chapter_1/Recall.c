#include <stdio.h>
#define MAXLINE 1000 //gioi han 1 dong

int getline(char line[], int maxline); //Ham doc line tra ve do dai ham
void reverse(char s[]); //Ham copy line

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)  
    {
        reverse(line);
        printf("%s\n", line);
    }       
    return 0;
}

int getline(char s[], int lim)
{
    int c, i; 
    
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c!= '\n'; i++)
        s[i] = c; 
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0'; 
    return i;
}

void reverse(char s[])
{
    char temp;
    int length;
    int i;

    length = 0;

    while (s[length] != '\0')
    length++;     

    for (i = 0; i < length / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp; 
    }
}