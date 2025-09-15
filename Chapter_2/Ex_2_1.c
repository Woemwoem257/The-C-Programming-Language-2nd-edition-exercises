/*Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types.*/

#include <stdio.h>

#include <stdio.h>
#include <limits.h>  // Thư viện chuẩn cho các hằng số giới hạn
#include <float.h>   // Thư viện chuẩn cho các giới hạn floating-point

int main() {
    // In kích thước của các kiểu dữ liệu
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long: %zu bytes\n", sizeof(long));

    // In phạm vi (range) của các kiểu dữ liệu số nguyên
    printf("\nSigned ranges:\n");
    printf("char: [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);
    printf("short: [%d, %d]\n", SHRT_MIN, SHRT_MAX);
    printf("int: [%d, %d]\n", INT_MIN, INT_MAX);
    printf("long: [%ld, %ld]\n", LONG_MIN, LONG_MAX);

    // In phạm vi của các kiểu unsigned
    printf("\nUnsigned ranges:\n");
    printf("unsigned char: [0, %u]\n", UCHAR_MAX);
    printf("unsigned short: [0, %u]\n", USHRT_MAX);
    printf("unsigned int: [0, %u]\n", UINT_MAX);
    printf("unsigned long: [0, %lu]\n", ULONG_MAX);

    // In phạm vi của các kiểu dữ liệu floating-point
    printf("\nFloating-point ranges:\n");
    printf("float: [%e, %e] with epsilon: %e\n", FLT_MIN, FLT_MAX, FLT_EPSILON);
    printf("double: [%e, %e] with epsilon: %e\n", DBL_MIN, DBL_MAX, DBL_EPSILON);
    printf("long double: [%Le, %Le] with epsilon: %Le\n", LDBL_MIN, LDBL_MAX, LDBL_EPSILON);

    return 0;
}
