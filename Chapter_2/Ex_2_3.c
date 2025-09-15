/****************************************************************************************
 * File name: Ex_2_3.c                                                                  *
 * Description: Write a function htoi(s), which converts a string of hexadecimal digits 
 * (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
 * through 9, a through f, and A through F                                                                  *
 * Date:                                                                                 *
 *              15/9/2025: New                                                          *
 ***************************************************************************************/
#include <stdio.h>

 /* htoi: convert string of hexadecimal digits to integer */
 int htoi(char s[])
 {
    int i = 0, n = 0;
    // Bỏ qua tiền tố 0x hoặc 0X nếu có
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }
    for (; s[i] != '\0'; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            n = 16 * n + (s[i] - '0');
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            n = 16 * n + (s[i] - 'a' + 10);
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            n = 16 * n + (s[i] - 'A' + 10);
        } else {
            // Nếu gặp ký tự không hợp lệ thì dừng
            break;
        }
    }
    return n;
}

int main() {
    char *tests[] = {"0x1A3F", "1A3F", "0XFF", "7b", "0x0", "123", "0xG1"};
    int num_tests = sizeof(tests) / sizeof(tests[0]);
    for (int i = 0; i < num_tests; ++i) {
        printf("htoi(\"%s\") = %d\n", tests[i], htoi(tests[i]));
    }
    return 0;
}
 