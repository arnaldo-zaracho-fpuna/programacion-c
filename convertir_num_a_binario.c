#include <stdio.h>
int convertir_num_a_binario(int numero,int vector[]){
    if(numero == 0){
        vector[0] == 0;
        return 1;
    }
    int temp[64];
    int i = 0;
    while(numero > 0){
        temp[i] = numero % 2;
        numero /= 2;
        i++;
    }
    for(int j = 0; j < i; j++){
        temp[j] = temp[i - 1 - j];
    }
    return i;
}   
int main(void){
    int numero = 0;
    if(scanf("%d",&numero) != 1){
        return 1;
    }
    int vector[64];
    int tam = convertir_num_a_binario(numero,vector);
    printf("[\n");
    for(int i = 0; i < tam; i++){
        if(vector[i] == 1){
            printf("True");
        }else{
            printf("False");
        }if(i < tam - 1){
            printf(",");
        }
    }
    printf("]\n");
    return 0;
}
   

