/**
 *  @file TCP_Chapter2_Exercise9.c
 *  @brief TCP_Exercise 2-9
 *  @details In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
 * in x. Explain why. Use this observation to write a faster version of bitcount.  
 *  @version 1.0
 *  @date 20/9/2025
 *  @author LuuDucNam
 */

 /*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include <stdio.h>

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
int bitcount(unsigned x);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
int bitcount(unsigned x)
 {
int b = 0;
 while (x)
 {
    x &= (x - 1);
    b++;
 }
  return b;
 }   

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        This function count 1 bits in x.
* @details      The function deletes the rightmost 1-bit in `x` using the operation `x &= (x - 1)`, which effectively reduces the number of 1-bits in `x` by one.
*               The function continues this process until all 1-bits are deleted, counting the number of deletions to determine the total number of 1-bits in the original value of `x`.
*               The function uses a loop to repeatedly apply the bit manipulation operation and increment a counter until `x` becomes zero.
* @param[in]     x    The original number whose bits are to be rotated.
*
* @return        int    The number of 1 bits in 'x'.
*
* @pre           The value of 'x' should be a non-negative integer.
* @post          The function returns the count of 1 bits in 'x'.
*
* @api           bitcount(x)
*/


int main() {
    unsigned x = 0xF0F0F0F0; 
    int result;

    result = bitcount(x);
    printf("Result: %d bits\n", result);

    return 0;
}