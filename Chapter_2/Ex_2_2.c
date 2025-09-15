/****************************************************************************************
 * File name: Ex_2_2.c                                                                  *
 * Description: Write a loop equivalent to the for loop above without using && or ||    *
 * loop: for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)                 *
 *          s[i] = c;                                                                   *
 * Date:                                                                                 *
 *              27/8/2025: New                                                          *
 ***************************************************************************************/
#include <stdio.h>
#define LIM 100

int main(){

    int i, lim = LIM;
    char s[LIM];
    char c;

     while (i < lim - 1) {
        c = getchar();  // Đọc một ký tự từ stdin
        if (c == '\n')   // Kiểm tra nếu gặp ký tự newline
            break;
        if (c == EOF)    // Kiểm tra nếu gặp EOF
            break;
        s[i] = c;        // Lưu ký tự vào mảng s
        i++;             // Tăng chỉ số
    }

    return 0;
}
 