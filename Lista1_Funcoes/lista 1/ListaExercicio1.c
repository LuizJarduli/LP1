#include <stdio.h>
#include <stdlib.h>


int RetornaPosNeg(int N);

int main(){

    int N, resultado;
    printf("Digite um numero para saber se e' positivo ou negativo: ");
    scanf("%d", &N);
    resultado = RetornaPosNeg(N);
    if(resultado == 0){
        printf("\nO numero e' Positivo\n");
    } else if(resultado == 1){
        printf("\nO numero e' Negativo\n");
    } else{
        printf("\nO numero e' neutro\n");
    }
}

int RetornaPosNeg(int N){

    int result = 0;
    if(N < 0){
        result = 1;
    } else if(N>1){
        result = 0;
    } else{
        result = 2;
    }
    return result;
}
