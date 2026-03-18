#include<stdio.h>
int main(){
    float C, F;
    printf("Insira a temperatura em Celsius:\n");
    scanf("%f", &C);
    F = (C*9/5) + 32;
    printf("A temperatura de Fahrenheit é:\n");
    printf("%f", F);
    return 0;
}