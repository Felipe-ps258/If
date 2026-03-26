#include<stdio.h>

int main(){

    int n, k;
    int f0 = 0, f1= 1, fk;

    printf("Digite um número que seja inteiro e que não seja negativo: ");
    scanf("%d", &n);

    for (k= 0; k <= n; k++){
        if (k == 0){
            printf("F%d = %d\n", k, f0);
        }else if (k == 1){
        printf("F%d = %d\n", k, f1);
    } else {
        fk = f0 + f1;
        printf("F%d = %d\n", k, fk);
        f0 = f1;
        f1 = fk;
    }
    } 
    
    return 0;
}