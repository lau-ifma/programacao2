#include <stdio.h>
#include <stdlib.h>

void main(){
    float a =10;
    float *p = &a;    // p recebe o endereco de a

    printf("%p\n", p);  // mostra o endereço de memoria
    printf("%f\n", *p);  // mostra o valor que esta no endereço
}
