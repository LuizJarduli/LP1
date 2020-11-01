#include <stdio.h>
#include <stdlib.h>


int VerificaNulo(int N);

int main(){
    int N, resultado;
    printf("Digite algum valor par saber se ele e' nulo: ");
    scanf("%d", &N);
    resultado = VerificaNulo(N);
    if(resultado == 1){
        printf("O valor e' Nulo\n");
    } else{
        printf("O valor nao e' nulo\n");
    }
}


int VerificaNulo(int N){
    int result = 0;
    if(N == 0){
       result = 1;
    } else {
        result = 0;
    }
    return result;
}
