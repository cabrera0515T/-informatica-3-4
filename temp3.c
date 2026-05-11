#include <stdio.h>
// 1. Prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
    printf("Temperature Coverter \n");
    printf("1. Celsius to Fahrenheitn \n");
    printf("2. Fahrenheit to Celsius \n");
    printf("Enter your option: ");
    int user_response;
    scanf("%d2, &user_response);{
        }


//2. Define
void c_to_f(void){
    float c;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", %c);
    float f= (c * 1.8) + 32;
    printf("%.2f°C = %.2f°F \n", c, f);
}

void f_to_c(void){
    float f;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);
    float c =(f- 32) / 1.8;
    printf("%.2f°C = %.2f°F \n", f, c);
}
