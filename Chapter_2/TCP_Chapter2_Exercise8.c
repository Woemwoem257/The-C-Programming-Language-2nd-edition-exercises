/**
 *  @file TCP_Chapter2_Exercise8.c
 *  @brief TCP_Exercise 2-8
 *  @details Write a function rightrot(x,n) that returns the value of the integer x rotated
 * to the right by n positions. 
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
unsigned rightrot(unsigned x, int n);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
unsigned rightrot(unsigned x, int n) {
    int bit_size = sizeof(x) * 8; 
    n = n % bit_size; 
    return (x >> n) | (x << (bit_size - n)); 
}  

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        This function rotates the bits of `x` to the right by `n` positions.
*               The bits that "fall off" the right are wrapped around to the left.
* @details      The function performs a right bitwise rotation on the integer `x` by `n` positions. 
*               It shifts the bits of `x` to the right by `n` positions, and the bits that are shifted 
*               out of the rightmost positions are wrapped around and placed on the leftmost positions. 
*               The function uses bitwise shift operators (`>>` and `<<`) and bitwise OR to achieve the rotation.
*               
*               The right shift operation (`x >> n`) moves the bits of `x` to the right by `n` positions. 
*               The left shift operation (`x << (sizeof(x) * 8 - n)`) moves the bits that "fall off" the 
*               right side to the leftmost positions, completing the rotation.
*
* @param[in]     x    The original number whose bits are to be rotated.
* @param[in]     n    The number of positions to rotate the bits of `x` to the right.
*
* @return        unsigned    The modified version of `x` after rotating the bits to the right.
*
* @pre           The value of `n` should be non-negative and less than or equal to the number of bits in `x`.
* @post          The bits in `x` are rotated to the right by `n` positions, with bits wrapped around from the right to the left.
*
* @api           rightrot(x, n)
*/


int main() {
    unsigned x = 0xF0F0F0F0; 
    unsigned result;

    result = rightrot(x, 4);
    printf("Result: 0x%X\n", result);

    return 0;
}