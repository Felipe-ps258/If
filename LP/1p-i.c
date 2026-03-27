#include <stdio.h>
int main(){
    int n, i;
    printf("Digite o número: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d é par\n", i);
        }
        else{
            printf("%d é impar\n", i);
        }
    }
}   