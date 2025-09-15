#include <stdio.h>
 #define IN 1 /* inside a word */
 #define OUT 0 /* outside a word */
 /* Write a program that prints its input one word per line */
 int main()
 {
 int c, state;

 state = OUT; //Khoi tao gia tri 

 while ((c = getchar()) != EOF) {
 if (c == ' ' || c == '\n' || c == '\t'){
    if (state == IN)
    {
        putchar('\n'); //Khi co ki tu moi se xuong dong 
        state = OUT; //Set lai khi het 1 word 
    }
 }
 else {
 if (state == OUT)
 state = IN; //Dang trong word 
 putchar(c); //In word 
 }
 }
 return 0; 
 } 