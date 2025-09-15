#include <stdio.h>

#define MAX_WORD_LENGTH 10  // Giới hạn độ dài từ tối đa
#define MAX_WORDS 100      // Giới hạn số lượng từ

int main() {
    int c, i, j, word_length = 0;
    int word_lengths[MAX_WORD_LENGTH + 1] = {0};

    // Đọc đầu vào và đếm độ dài từ
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (word_length > 0 && word_length <= MAX_WORD_LENGTH) {
                word_lengths[word_length]++;
            }
            word_length = 0;
        } else {
            word_length++;
        }
    }

    // In biểu đồ theo chiều dọc
    for (i = MAX_WORD_LENGTH; i > 0; i--) {
        printf("%2d |", i);
        for (j = 1; j <= MAX_WORD_LENGTH; j++) {
            if (word_lengths[j] >= i) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    // In trục hoành
    printf("    +");
    for (i = 1; i <= MAX_WORD_LENGTH; i++) {
        printf("---");
    }
    printf("\n     ");
    for (i = 1; i <= MAX_WORD_LENGTH; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    return 0;
}
