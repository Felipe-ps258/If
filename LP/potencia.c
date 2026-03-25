#include<stdio.h>

int main(){

    float r, x;
    int c, y;
    
    printf("Insira a base (real) e o expoente (inteiros): ");
    scanf("%f %d", &x, &y);

    r = 1; 
    for (c = 1; c <= y; c++)
    {
        r = r * x; 
    }
    
    printf("Resultado: %f\n", r);

    return 0;
}