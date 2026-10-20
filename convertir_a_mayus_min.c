#include <stdio.h>
#include <ctype.h>
#include <string.h>
void aMayusculas(char *cadena){
    for(int i = 0; cadena[i] != '\0'; i++){
            cadena[i] = toupper((unsigned char)cadena[i]);
    }
}
void aMinuscula(char *cadena){
    for(int i = 0; cadena[i] != '\0'; i++){
        cadena[i] = tolower((unsigned char)cadena[i]);
    }
}
int main(){
    char palabra[100];
    printf("Ingrese la palabra o frase: ");
    fgets(palabra, sizeof(palabra), stdin);
    palabra[strcspn(palabra, "\n")] = '\0';
    aMayusculas(palabra);
    printf("La palabra en mayuscula es: %s\n",palabra);
    aMinuscula(palabra);
    printf("La palabra en minuscula es: %s\n",palabra)  ;
    return 0;
}