#include <stdio.h>
#include <string.h>

void main(){
    char texto[100] = "IFMA";
    char livro[100] = "Instituto";
    int t = strlen(texto);

    if (strcmp(texto,livro) == 0){
        printf("Strings iguais");
    }
    else{
        printf("Strings diferentes");
    }
}