#include<stdio.h>

int main(){
    float F, C;
    printf("Insira a temperatura em graus Fahrenheit: ");
    scanf("%f", &F);
    C = 5* (F - 32)/9;
    printf("A temperatura em Celsius é: ");
    printf("%f", C);
    
    return 0;
}