#include <stdio.h>
#define MAX_WORD_LENGTH 10 //Gioi han do dai tu
#define MAX_WORDS 100      //Gioi han so luong tu

/*Second try with Ex. 1-13.*/

int main(){
    int c, i, j, word_length = 0;
    int word_lengths[MAX_WORD_LENGTH + 1] = {0};

    //Dem so tu 
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (word_length > 0 && word_length <= MAX_WORD_LENGTH)
            {
                ++word_lengths[word_length]; 
            }
            word_length = 0;
        }
        else ++word_length; 
    }

    //Ve truc tung - so luong tu
    for ( i = MAX_WORD_LENGTH; i > 0; i--)
    {
        printf("%2d| ", i);
        for (j = 1; j <= MAX_WORD_LENGTH; j++)
        {
            if (word_lengths[j] >= i)
            {
                printf("*");
            }else printf(" ");
            
        }printf("\n");
    }

    //Ve truc hoanh - do dai tu
    printf("    +");
    for (i = 1; i <= MAX_WORD_LENGTH; i++)
    printf("---");
    printf("\n   ");
    for (i = 1; i <= MAX_WORD_LENGTH; i++)
    printf("%2d", i);
    printf("\n");

    return 0;
}