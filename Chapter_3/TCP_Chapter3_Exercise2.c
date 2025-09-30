/**
 *  @file TCP_Chapter3_Exercise2.c
 *  @brief TCP_Exercise 3-2
 *  @details Write a function escape(s,t) that converts characters like newline and tab
 * into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write
 * a function for the other direction as well, converting escape sequences into the real characters.  
 *  @version 1.0
 *  @date 30/9/2025
 *  @author LuuDucNam
 */

 /*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include <stdio.h>

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
char* escape(char s[], char t[]);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
 char* escape(char s[], char t[])
 {
 int c, i, j;
 i = j = 0;

    while ((c = t[i++]) != '\0'){
        switch (c){
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = c;
                break;
        }
         s[j] = '\0';
 }  

 return s;
 }

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        This function replaces newline and tab characters in a string s with thier visible escape sequences
* @details      The function 'escape' takes two character arrays (strings) as input: 's' and 't'.
*               It copies the contents of string 't' to string 's', replacing newline characters ('\n')
*               with the escape sequence '\\n' and tab characters ('\t') with the escape sequence '\\t'.
*               The function uses a while loop to iterate through each character in string 't' until it reaches the null terminator ('\0').
*               Inside the loop, a switch statement is used to check the current character. If it is a newline or tab,
*               the corresponding escape sequence is added to string 's'. For any other charater, it is copied directly to 's'.
*               Finally, the function appends a null terminator to the end of string 's' and returns it. 
* @param[in]     s    The string to store the result with escape sequences.
* @param[in]     t    The string to be processed.
*
* @return        char The modified string 's' with escape sequences.
*
* @pre           The input string 't' must be a valid null-terminated string.
* @pre           The output string 's' must have enough space to hold the modified content.
* @post          The function returns the modified string 's' with escape sequences.
*
* @api           escape(s, t)
*/


int main() {
    char s[100];
    char t[] = "Hello\nWorld\t!";
    printf("Original string: %s\n", t);
    escape(s, t);
    printf("Escaped string: %s\n", s);
    return 0;
}