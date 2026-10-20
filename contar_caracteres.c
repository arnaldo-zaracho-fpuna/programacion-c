#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ContarCaracteres(char *cadena, int *mayus, int *minus, int *numeros, int *otros){
    *mayus = 0;
    *minus = 0;
    *numeros = 0;
    *otros = 0;
    for(int i = 0; cadena[i] != '\0'; i++){
        unsigned char c = (unsigned char)cadena[i];
        if(c >= 'A' && c <= 'Z'){
            (*mayus)++;
        }else if(c >= 'a' && c <= 'z'){
            (*minus)++;
        }else if(c >= '0' && c <= '9'){
            (*numeros)++;
        }else{
            (*otros)++;
        }
    }
}
int main(){
    char palabra[100];
    int mayus,minus,numeros,otros;
    fgets(palabra, sizeof(palabra), stdin);
    palabra[strcspn(palabra, "\n")] = '\0';
    ContarCaracteres(palabra,&mayus,&minus,&numeros,&otros);
     printf("May:%d\n", mayus);
    printf("Min:%d\n", minus);
    printf("Nros:%d\n", numeros);
    printf("Otros:%d\n", otros);
}