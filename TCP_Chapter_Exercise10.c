/**
 *  @file TCP_Chapter2_Exercise10.c
 *  @brief TCP_Exercise 2-10
 *  @details Rewrite the function lower, which converts upper case letters to lower case,
with a conditional expression instead of if-else. 
 *  @version 1.0
 *  @date 21/9/2025
 *  @author LuuDucNam
 */

 /*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include <stdio.h>

/*==================================================================================================
*                                        DEFINE VARIABLES
==================================================================================================*/
#define MAXLINE 100

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
int lower(int c);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
int lower(int c)
 {
 if (c >= 'A' && c <= 'Z')
 return c + 'a' - 'A';
 else
 return c;
 return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
 } 

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        This function converts upper case letters case to lower case.
* @details      This function converts upper case letters case to lower case, with a conditional expression instead of if-else.
*
* @param[in]     c    The original character.
*
* @return        char    The character has been lower case.
*
* @pre           N/A.
* @post          The function returns the character has been lower case.
*
* @api           lower(x)
*/


int main()
{
    char x[] = "AmAZING";   
    char k[MAXLINE] = {0};  

    for (int i = 0; x[i] != '\0'; i++) {
        k[i] = lower(x[i]);   
    }

    printf("Result: %s \n", k);  

    return 0;
}