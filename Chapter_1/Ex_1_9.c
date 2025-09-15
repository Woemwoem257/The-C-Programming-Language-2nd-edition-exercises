#include <stdio.h>
 /* Copy input to output, replacing each string of one or more blanks with a single blank */
 int main()
 {
 int c, last_char;

 last_char = 0;

 while ((c = getchar()) != EOF){
    if(c == ' ' && last_char == ' '){
        continue; 
    }
 putchar(c);
 last_char = c; 
}

return 0;
 } 