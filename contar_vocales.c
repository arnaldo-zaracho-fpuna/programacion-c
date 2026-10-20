#include <stdio.h>
#include <ctype.h>
#include <string.h>
int contarVocales(const char *cadena){
    int contador = 0;
    for(int i = 0; cadena[i] != '\0'; i++){
        char c = tolower((unsigned char)cadena[i]);
        if(c == 'a'|| c == 'e'||c == 'i'||c == 'o'||c == 'u' ){
            contador++;
        }
    }
    return contador;
}
int main(){
    char palabra[100];
    printf("Ingrese la palabra: ");
    fgets(palabra, sizeof(palabra),stdin);
    palabra[strcspn(palabra, "\n")] = '\0';
    int contador = (contarVocales(palabra));
    if(contador > 0){
        printf("Existen %d vocales\n",contador);
    }else{
        printf("No hay vocales\n");
    }
    return 0;
}