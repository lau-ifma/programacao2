#include <stdio.h>
#include <string.h>

void main(){
    char texto[100] = "IFMA";
    gets(texto);

    int i;
    int v = 0;
    int tamanho = strlen(texto);

    for (i = 0;i < tamanho; i++){
        texto[i] = tolower(texto[i]);
        if (texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u'){
            v++;
        }

    }

    printf("O texto tem %d vogais", v);

}