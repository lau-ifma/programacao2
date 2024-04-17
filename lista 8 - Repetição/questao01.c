// Faça um algoritmo que imprima todos os números pares compreendidos entre 85 e 907. O
// algoritmo deve também calcular a soma destes valores.

#include <stdio.h>

void main(){
    int i;
    int soma = 0;

    for (i = 85; i <=907 ;i ++){
        if (i %2 ==0){
            printf("%d\n", i);
            soma+=i;
        }
    }

    printf("Somatorio: %d", soma);
}