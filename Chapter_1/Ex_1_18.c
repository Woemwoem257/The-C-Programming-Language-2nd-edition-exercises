#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void remove_trailing_blanks_and_tabs(char line[]);

int main()
{
    int len;
    char line[MAXLINE];

    // Đọc từng dòng và xử lý
    while ((len = getline(line, MAXLINE)) > 0) {
        // Loại bỏ dấu cách và tab ở cuối dòng
        remove_trailing_blanks_and_tabs(line);

        // In dòng nếu nó không rỗng
        if (line[0] != '\0') {
            printf("%s", line);
        }
    }

    return 0;
}

// getline: Đọc một dòng vào mảng s và trả về chiều dài dòng
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';  // Đảm bảo kết thúc chuỗi
    return i;
}

// remove_trailing_blanks_and_tabs: Loại bỏ dấu cách và tab ở cuối dòng
void remove_trailing_blanks_and_tabs(char line[])
{
    int i = 0;

    // Tìm chiều dài chuỗi
    while (line[i] != '\0') {
        i++;
    }

    // Duyệt ngược từ cuối và loại bỏ dấu cách và tab
    while (i > 0 && (line[i - 1] == ' ' || line[i - 1] == '\t')) {
        i--;
    }

    // Đặt dấu '\0' để kết thúc chuỗi sau khi đã loại bỏ
    line[i] = '\0';
}
