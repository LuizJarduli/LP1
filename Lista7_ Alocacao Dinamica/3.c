/*

    3) Crie uma função que receba como parâmetros dois vetores de inteiros (já ordenados): x1 e x2
    e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro
    para um terceiro vetor, x3, alocado dinamicamente, contendo a união de
    x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.

    Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8},  x3 irá conter {1, 3, 4, 5, 6, 7, 8}.

    Assinatura da função:

    int* uniao(int *x1, int *x2, int n1, int n2, int* qtd);
*/

#include <stdio.h>
#include <stdlib.h>

int * uniao(int *x1, int *x2, int n1, int n2, int *qtd);
void imprimirConjunto(int *x, int tam);
void liberarMemoria(int *ptr);
void Bubble_Sort(int *ptr, int tam);
void removeRep(int *ptr, int *tam);

int main(){

    int *x3, qtd, n1, n2;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &n1);
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &n2);

    int x1[n1], x2[n2];

    printf("\n");
    for(int i = 0; i < n1; i++){
        printf("Digite o %d valor do primeiro vetor: ", i+1);
        scanf("%d", &x1[i]);
    }
    printf("\n");
    for(int i = 0; i < n2; i++){
        printf("Digite o %d valor do segundo vetor: ", i+1);
        scanf("%d", &x2[i]);
    }

    qtd = 0;

    printf("\nconjunto x1 = ");
    imprimirConjunto(x1,n1);
    printf("conjunto x2 = ");
    imprimirConjunto(x2,n2);

    removeRep(x1, &n1);
    removeRep(x2, &n2);

    Bubble_Sort(x1, n1);
    Bubble_Sort(x2, n2);

    x3 = uniao(x1,x2,n1,n2,&qtd);

    printf("\nUniao x3 = ");
    imprimirConjunto(x3,qtd);

    liberarMemoria(x3);
    return 0;
}

void removeRep(int *ptr, int *tam){
    int fila = 0;
    for(int i = 0; i < *tam-fila; i++){
        for(int j = i+1; j < *tam-fila; j++){
            if(*(ptr+j) == *(ptr+i)){
                for(int x = j; x < *tam-fila;x++){
                    *(ptr+x) = *(ptr+x+1);
                }
                fila++;
                j--;
            }

        }
    }

    *tam = *tam - fila;
    ptr = (int *) realloc(ptr, *tam);

}

void Bubble_Sort(int *ptr, int tam){
    int aux;
    for(int i = 0; i < tam-1; i++){
        for(int j = i+1; j < tam; j++){
            if(*(ptr+i) > *(ptr+j)){
                aux = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = aux;
            }
        }
    }
}

void imprimirConjunto(int *x, int tam){
    if(tam > 1){
        for(int i = 0; i < tam; i++){
            if(i == 0) printf("{ %d, ", x[i]);
            else if(i == tam-1)printf("%d }\n", x[i]);
            else printf("%d, ", x[i]);
        }
    } else {
        printf("{ %d }\n", x[0]);
    }


}

void liberarMemoria(int *ptr){
    free(ptr);
    printf("\nMemoria liberada!!!!!");
}

int * uniao(int *x1, int *x2, int n1, int n2, int *qtd){
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
            ptr[*qtd] = x1[i];
            i++;
            (*qtd)++;
        }
        else if(x2[j] < x1[i]){
            ptr[*qtd] = x2[j];
            (*qtd)++;
            j++;
        }
        else {
            ptr[*qtd] = x1[i];
            j++;
            i++;
            (*qtd)++;
        }
    }
    if(i < n1){
        while(i < n1){
            ptr[*qtd] = x1[i];
            i++;
            (*qtd)++;

        }
    }
    else if(j < n2){
        while(j < n2){
            ptr[*qtd] = x2[j];
            j++;
            (*qtd)++;
        }
    }
    ptr = (int *) realloc(ptr, (*qtd) * sizeof(int));
    return ptr;
}

