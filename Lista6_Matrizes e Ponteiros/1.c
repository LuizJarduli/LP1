/*
    1) Escreva um algoritmo que declare uma matriz de inteiros 3x3 e imprima os elementos
    conforme exibido abaixo utilizando aritmética de ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){

    int matriz[TAM][TAM];
    for(int i = 0 ; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("Insira o valor para a matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 1\n\n");
    int *ptr;
    ptr = matriz[0];
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", *(ptr + i * TAM + j));
        }
        printf("\n");
    }

    return 0;
}

