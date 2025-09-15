#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void Tempto(void);

int main(){
    Tempto();

    return 0;
}

void Tempto(void){
 float lower, upper, step, celsius, fahr;
 lower = LOWER; /* lower limit of temperature scale */
 upper = UPPER; /* upper limit */
 step = STEP; /* step size */
 fahr = lower;
 printf("Fahrenheit to Celsius\n");
 printf("---------------------\n");
 while (fahr <= upper) {
 celsius = (5.0/9.0) * (fahr-32.0);
 printf("%3.0f %6.1f\n", fahr, celsius);
 fahr = fahr + step;
 } 
}