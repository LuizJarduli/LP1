/*
    4)  Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas
    respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para
    um terceiro vetor, x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro
    qtd para retornar o tamanho de x3.

    Sendo:
    x1 = {1, 3, 5, 6, 7}
    x2 = {1, 3, 4, 6, 8}
    x3 irá conter {1, 3, 6}.

    Assinatura da função:
    int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd);
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int * interseccao(int *x1, int *x2, int n1, int n2, int *qtd);
void imprimirConjunto(int *x, int tam);
void liberarMemoria(int *ptr);

int main(){

    int x1[TAM] = {1,3,5,6,7}, x2[TAM] = {1,3,4,6,8}, *x3, qtd, n1, n2;

    n1 = TAM;
    n2 = TAM;
    qtd = 0;

    printf("conjunto x1 = ");
    imprimirConjunto(x1,n1);
    printf("conjunto x2 = ");
    imprimirConjunto(x2,n1);

    x3 = interseccao(x1,x2,n1,n2,&qtd);

    printf("\nInterseccao x3 = ");
    imprimirConjunto(x3,qtd);

    liberarMemoria(x3);
    return 0;
}

void imprimirConjunto(int *x, int tam){
    for(int i = 0; i < tam; i++){
        if(i == 0) printf("{ %d, ", x[i]);
        else if(i == tam-1)printf("%d }\n", x[i]);
        else printf("%d, ", x[i]);
    }

}

void liberarMemoria(int *ptr){
    free(ptr);
    printf("\nMemoria liberada!!!!!");
}

int * interseccao(int *x1, int *x2, int n1, int n2, int *qtd){
    int *ptr, j = 0, i = 0;
    ptr = (int *) malloc((n1+n2) * sizeof(int));
    if(!ptr){
        printf("\nMemoria nao alocada!\n");
        exit;
    } else {
        printf("\nMemoria alocada com sucesso!\n");
    }
    while(i < n1 && j < n2){
        if(x1[i] < x2[j]){
            i++;
        }
        else if(x2[j] < x1[i]){
            j++;
        }
        else {
            ptr[*qtd] = x1[i];
            j++;
            i++;
            (*qtd)++;
        }
    }

    return ptr;
}

