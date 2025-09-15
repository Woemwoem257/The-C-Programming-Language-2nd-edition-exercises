#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float Fah_to_Cel(float fahr);

int main(){
    float fahr = LOWER; 

    printf("Fahrenheit to Celsius\n");
    printf("---------------------\n");
    while(fahr <= UPPER){
         printf("%3.0f %6.1f\n", fahr, Fah_to_Cel(fahr));
         fahr += STEP;
    }
    return 0;
}

float Fah_to_Cel(float fahr){
    return (5.0/9.0) * (fahr-32.0);
}