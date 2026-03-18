#include<stdio.h>
#include<math.h>

int main(){
    int x, y;
    int i;
    int resultado = 1;
    
    printf("Digite a base de (x): ");
    scanf("%d", &x);

    printf("Digite a potencia de (y): ");
    scanf("%d", &y);

    for(i = 0; i < y; i++ ) {
        resultado = resultado * x;
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}