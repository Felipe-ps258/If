#include<stdio.h>

int main(){
    int a, b;
    int mdc;

    printf("Digite o número de (a): ");
    scanf("%d", &a);

    printf("Digite o número de (b): ");
    scanf("%d", &b);

    while (b != 0){
        mdc = a % b;
        a = b;
        b = mdc;
    }

    printf("MDC: %d\n", a);

    return 0;
}