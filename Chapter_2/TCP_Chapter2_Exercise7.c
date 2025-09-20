/**
 *  @file TCP_Chapter2_Exercise7.c
 *  @brief TCP_Exercise 2-7
 *  @details Write a function invert(x,p,n) that returns x with the n bits that begin at
 * position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged. 
 *  @version 1.0
 *  @date 19/9/2025
 *  @author LuuDucNam
 */

 /*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include <stdio.h>

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
unsigned invert(unsigned x, int p, int n);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
unsigned invert(unsigned x, int p, int n) {
    unsigned mask = ((1U << n) - 1) << (p - n + 1);
    return x ^ mask;
} 

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        This function modifies `x` by inverting the n bits starting from position p 
*               (i.e., flipping the bits, changing 1 to 0 and vice versa), leaving other bits unchanged.
* @details      The function inverts `n` bits starting from position `p` in `x`. The inversion process 
*               flips each bit from 1 to 0 and vice versa, while the remaining bits in `x` remain unchanged. 
*               The function uses bit manipulation techniques such as masking and bitwise XOR to perform the inversion.
*               
*               A mask is created that isolates the `n` bits starting at position `p`. The function then 
*               uses the XOR operation to flip the bits, ensuring the inversion of only the selected bits.
*
* @param[in]     x    The original number whose bits are to be modified.
* @param[in]     p    The position from where bits in `x` will be inverted (0-based index from the right).
* @param[in]     n    The number of bits to invert in `x`.
*
* @return        unsigned    The modified version of `x` after inverting the specified bits.
*
* @pre           The value of `p` should be greater than or equal to 0 and less than or equal to the 
*               number of bits in `x`.
* @post          The bits in `x` starting from position `p` are inverted, and other bits remain unchanged.
*
* @api           invert(x, p, n)
*/

int main() {
    unsigned x = 0xF0F0F0F0; 
    unsigned result;

    result = invert(x, 16, 4);
    printf("Result: 0x%X\n", result);

    return 0;
}