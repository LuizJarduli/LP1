/*
    2) Modifique o exercício anterior para que imprima a matriz invertida, onde era linha, agora
    será coluna.
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
            printf("%d ", *(ptr + i + j * TAM));
        }
        printf("\n");
    }

    return 0;
}

