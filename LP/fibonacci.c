#include<stdio.h>

int main(){

    int n;

    printf("Digite um número que seja inteiro e que não seja negativo: ");
    scanf("%d", &n);

    int f0 = 0, f1= 1, fk, i; 

    for (i= 0; i <= n; i++){
        if (i < 2){
            fk = i;
        }else{
            fk = f0 + f1;
            f0 = f1;
            f1 = fk; 
        }
        printf("F%d = %d\n", i, fk);
    } 
    
    return 0;
}