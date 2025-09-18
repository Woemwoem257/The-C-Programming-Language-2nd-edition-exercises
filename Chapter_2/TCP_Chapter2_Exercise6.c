/**
 *  @file TCP_Chapter2_Exercise6.c
 *  @brief TCP_Exercise 2-6
 *  @details Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
 *  position p set to the rightmost n bits of y, leaving the other bits unchanged
 *  @version 1.0
 *  @date 16/9/2025
 *  @author LuuDucNam
 */

 /*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include <stdio.h>

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
unsigned setbits(unsigned x, int p, int n, unsigned y);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned mask = ~(~0 << n) << (p + 1 - n);

    y = (y & ~(~0 << n)) << (p + 1 - n);

    return (x & ~mask) | y;
} 

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        This function modifies `x` by setting the n bits starting from position p 
*               to the rightmost n bits of `y`.
* @details      The function sets `n` bits starting from the position `p` of `x` to the rightmost 
*               `n` bits of `y`, leaving other bits unchanged. The function uses bit manipulation 
*               techniques like masking and bitwise OR.
*
* @param[in]     x    The original number whose bits are to be modified.
* @param[in]     p    The position from where bits in `x` will be set (0-based index from the right).
* @param[in]     n    The number of bits to modify in `x`.
* @param[in]     y    The number from which the rightmost `n` bits will be taken to set `x`.
*
* @return        unsigned    The modified version of `x` after setting the specified bits.
*
* @pre           The value of `p` should be greater than or equal to 0 and less than or equal to the 
*               number of bits in `x`.
* @post          The bits in `x` starting from position `p` are replaced by the rightmost `n` bits 
*               from `y`, and other bits remain unchanged.
*
* @api           setbits(x, p, n, y)
*
*/
int main() {
    unsigned x = 0xF0F0F0F0; 
    unsigned y = 0x12345678; 
    unsigned result;

    result = setbits(x, 16, 4, y);
    printf("Result: 0x%X\n", result);

    return 0;
}