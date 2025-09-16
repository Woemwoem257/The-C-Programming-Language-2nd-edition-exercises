/****************************************************************************************
 * File name: Ex_2_5.c                                                                  *
 * Description: Write the function any(s1,s2), which returns the first location in a    *
 * string s1 where any character from the string s2 occurs, or -1 if s1 contains no     *
 * characters from s2.(The standard library function strpbrk does the same job but      *
 * returns a pointer to the location.)                                                  *                                          
 * Date:                                                                                *
 *              16/9/2025: New                                                          *
 ***************************************************************************************/
#include <stdio.h>

/* any: returns the first location in a string s1 where any character from the string s2 occurs */
int any(char s1[], char s2[]);

int main() {
    char s1[] = "hello world";
    char s2[] = "w";
    printf("Original s1: %s\n", s1);
    printf("Characters to search (s2): %s\n", s2);
    
    int index = any(s1, s2);
    if (index != -1) {
        printf("First match found at index: %d\n", index);
    } else {
        printf("No characters from s2 found in s1.\n");
    }

    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
}
 
 
 