
#include <stdio.h>

void main(){
    int A, n;
    printf("Digite o valor de (N): ");
    scanf("%d", &n);
    int i, x;
    A = n;

    for (i = 1 ; i <= n ; i++){
        A += (n -i) / i+1 ;

    }

    printf("Valor de A = %d", A );


   
}