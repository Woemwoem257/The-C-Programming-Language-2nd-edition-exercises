/**
 *  @file TCP_Chapter3_Exercise1.c
 *  @brief TCP_Exercise 3-1
 *  @details Our binary search makes two tests inside the loop, when one would suffice (at
 * the price of more tests outside.) Write a version with only one test inside the loop and
 * measure the difference in run-time. 
 *  @version 1.0
 *  @date 29/9/2025
 *  @author LuuDucNam
 */

 /*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include <stdio.h>

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
int binsearch(int x, int v[], int n);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
 int binsearch(int x, int v[], int n)
 {
 int low, high, mid;
 low = 0;
 high = n - 1;

 while (low <= high) {
   mid = (low+high)/2;
   if (x == v[mid]){
    return mid; 
 }
   low = x > v[mid] ? low : mid + 1;
   high = x < v[mid] ? high : mid - 1;
   }
 return -1; 
 }  

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        This function search first occurence of x in v[]
*               using binary search algorithm with one test inside the loop.
* @details      The function 'binsearch' implements a binary search algorithm to find the index of
*               the first occurrence of a given integer `x` in a sorted array `v` of integers.
*               The function takes three parameters: the integer `x` to be searched, a pointer
*               to the sorted array `v`, and the number of elements `n` in the array.
*               It initializes two variables, `low` and `high`, to represent the current search
*               range within the array. The search continues as long as `low` is less than or equal
*               to `high`. In each iteration, it calculates the midpoint `mid` of the current range.
*               If the value at `v[mid]` is equal to `x`, it returns the index `mid`. If `x` is greater than
*               `v[mid]`, it narrows the search to the upper half by updating `low`. If `x` is less than `v[mid]`, it narrows the search to the lower half by updating `high`.
*               If `x` is not found in the array, the function returns -1.
*
* @param[in]     x    The integer value to be searched in the array.
* @param[in]     v    A pointer to the sorted array of integers.
* @param[in]     n    The number of elements in the array.
*
* @return        unsigned The index of the first occurrence of `x` in the array `v`, or -1 if `x` is not found.
*
* @pre           The array `v` must be sorted in ascending order.
* @pre           The number of elements `n` must be greater than 0.
* @post          The function returns the index of the first occurrence of `x` in the array `v`, or -1 if `x` is not found.
*
* @api           binsearch(x, v, n)
*/


int main() {
      int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      int size = sizeof(arr) / sizeof(arr[0]);
      int x = 5;
   // int x = 0;
      int result = binsearch(x, arr, size);
      if (result != -1) {
         printf("Element found at index: %d\n", result);
      } else {
         printf("Element not found in the array.\n");
      }
      return 0;
}