#include<stdio.h>

int main(){
    int n, resultado, i;
    resultado = 1;

    printf("Digite o número: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        resultado = resultado *i;
    }
    
    printf("Resultado: %d\n", resultado);

    return 0;
}