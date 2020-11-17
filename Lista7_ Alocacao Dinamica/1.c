/*
    1)Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos
    e passe esse vetor para uma função que vai ler os elementos desse vetor. Depois, no
    programa principal, o vetor preenchido deve ser impresso. Além disso, antes de
    finalizar o programa, deve-se liberar a área de memória alocada.
*/
#include <stdio.h>
#include <stdlib.h>

void preencher(int *ptr, int n);
void liberarMemoria(int *ptr);

int main(){

    int n, *ptr;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    ptr = (int *) malloc(n * sizeof(int));
    if(!ptr){
        printf("Erro ao alocar memoria!\n");
        return 0;
    } else {
        printf("Memoria alocada com sucesso!\n");
    }

    preencher(ptr, n);

    printf("\n");
    for(int i = 0; i < n; i++){
        printf("Valor da posicao %d do vetor : %d\n", i+1, ptr[i]);

    }
    liberarMemoria(ptr);


    return 0;
}

void preencher(int *ptr, int n){
    for(int i = 0; i < n; i++){
        printf("Insira o %d valor do vetor alocado: ", i+1);
        scanf("%d", &ptr[i]);
    }
}
void liberarMemoria(int *ptr){
    free(ptr);
    printf("Memoria liberada\n");
}
