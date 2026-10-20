#include <stdio.h>
#include <string.h>
void ConcatenarPalabras(char *destino,const char *origen){
    int i = 0;
    while(destino[i] != '\0'){
        i++;
    }
    int j = 0;
    while(origen[j] != '\0'){
        destino[i] = origen[j];
        i++;
        j++;
    }
    destino[i] = '\0';
}
int main(){
    char destino[100];
    char origen[100];
    printf("Ingrese la primera palabra(Destino): ");
    fgets(destino,sizeof(destino),stdin);
    destino[strcspn(destino, "\n")]= '\0';
    printf("Ingrese la segunda palabra(origen): ");
    fgets(origen,sizeof(origen),stdin);
    origen[strcspn(origen, "\n")]= '\0';
    ConcatenarPalabras(destino," ");
    ConcatenarPalabras(destino,origen);
    printf("Resultado concatenado: %s\n",destino);
    return 0;
}