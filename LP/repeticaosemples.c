#include<stdio.h>

int main(){
    char frase[100];
    int n, i;
    n = 100;

    printf("Escreva sua frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; i < n; i++)
    {
        printf("%s", frase);
    }
    

    return 0;
}