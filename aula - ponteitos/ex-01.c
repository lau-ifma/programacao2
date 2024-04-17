#include <stdio.h>
#include <stdlib.h>

void main(){
    int a =10;
    int *p;     // p é um ponteiro
    p = &a;    // p recebe o endereco de A

    printf("%p", p);  // mostra o endereço de memoria
    printf("%d", *p);  // mostra o valor que esta no endereço

}

void quadrado(int x){
    x = x * x;
}