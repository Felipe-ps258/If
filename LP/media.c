#include<stdio.h>
int main(){
    float n1, n2, n3, media;
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/3;

    if (media >= 7){
        if (media == 7) {
            printf("Passou na média");
        }
        else {
            printf("Passou direto");
        }
    } else{
        printf("Reprovou");
    }

    return 0;
    
}