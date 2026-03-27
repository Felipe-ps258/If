#include<stdio.h>

int main(){
    int n, d, i;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Digite o divisor: ");
    scanf("%d", &d);

    for (i = 0; i < n; i++)
    {
        if(i % d == 0){
            printf("%d é divisivel por %d (restante = 0)\n", d, i);
        }
        else{
            printf("%d não é divisivel por %d (restante > 0)\n", d, i);
        }
    }
    
    return 0;
}