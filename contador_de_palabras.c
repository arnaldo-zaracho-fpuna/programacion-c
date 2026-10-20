#include <stdio.h>
#include <string.h>
int main(){
    int contador = 0;
    char frase[100];
    printf("Ingrese la frase a comprobar: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
    char *palabra = strtok(frase, " ");
    while(palabra != NULL){
        contador++;
        palabra = strtok(NULL, " ");
    }
    printf("La cantidad de palabras que contiene esta frase es de: %d\n",contador);
    return 0;
}