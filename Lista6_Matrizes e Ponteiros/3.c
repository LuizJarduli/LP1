/*
    3. Faça um algoritmo para somar duas matrizes 4x4
*/
#include <stdio.h>
#define TAM 4

void imprimeMatriz(int *m, int linha, int coluna);
void somaMatriz(int *m,int *m2, int linha, int coluna);
int main(){

    int matriz[TAM][TAM] = {
                            {1,1,1,1},
                            {1,1,1,1},
                            {1,1,1,1},
                            {1,1,1,1}
                            },
        matriz2[TAM][TAM] = {
                            {1,1,1,1},
                            {1,1,1,1},
                            {1,1,1,1},
                            {1,1,1,1}
                            };

    int *mtr1 = matriz[0];
    int *mtr2 = matriz2[0];
    printf("Matriz 1\n\n");
    imprimeMatriz(mtr1, TAM, TAM);
    printf("Matriz 2\n\n");
    imprimeMatriz(mtr2, TAM, TAM);
    printf("Soma das duas matrizes\n\n");
    somaMatriz(mtr1, mtr2, TAM, TAM);


    return 0;
}

void somaMatriz(int *m,int *m2, int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", *(m + i * linha + j) + *(m2 + i * linha + j));
        }
        printf("\n");
    }
    printf("\n");
}

void imprimeMatriz(int *m, int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", *(m + i * linha + j));
        }
        printf("\n");
    }
    printf("\n");
}
