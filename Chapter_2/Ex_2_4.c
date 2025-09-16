/****************************************************************************************
 * File name: Ex_2_4.c                                                                  *
 * Description: Write an alternative version of squeeze(s1,s2) that deletes each        *  
 * character in s1 that matches any character in the string s2.                         *                                          *
 * Date:                                                                                *
 *              16/9/2025: New                                                          *
 ***************************************************************************************/
#include <stdio.h>

/* squeeze: deletes each character in s1 that matches any character in the string s2 */
void squeeze(char s1[], char s2[]);

int main() {
    char s1[] = "hello world";
    char s2[] = "ole";
    printf("Original s1: %s\n", s1);
    printf("Characters to remove (s2): %s\n", s2);
    squeeze(s1, s2);
    printf("Modified s1: %s\n", s1);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;
    int found;
    for (i = k = 0; s1[i] != '\0'; i++) {
        found = 0;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
}
 
 
 