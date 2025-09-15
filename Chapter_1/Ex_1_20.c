#include <stdio.h>
#define TABSTOP 8
/*Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?*/
void detab();

int main(){
    detab();
    return 0;
}

void detab(){
    int c;
    int column;

    column = 0;
    
    while ((c = getchar()) != EOF){
        if (c == '\t'){
            int space_to_add = TABSTOP - (column % TABSTOP);

            for (int i = 0; i < space_to_add; i++){
                putchar(' ');
                column++; 
            }
        }
        else if(c == '\n'){
            putchar(c);
            column = 0; 
        }
        else{
            putchar(c);
            column++;
        }
    }
}