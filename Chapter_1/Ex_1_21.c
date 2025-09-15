#include <stdio.h>
#define TABSTOP 8
/*Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
When either a tab or a single blank would suffice to reach a tab stop, which should be given
preference?*/
void entab();

int main(){
    entab();
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