#include <stdio.h>

//realizado em dupla com OANI DA SILVA DA COSTA

int somavetor(int vetor[], int posicao);
void main(void){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamvetor = sizeof(vet)/sizeof(int);
    printf("%d", somavetor(vet,tamvetor-1));
}

int somavetor(int vetor[], int posicao){
    if(posicao < 0)
        return 0;
    else
        return vetor[posicao] + somavetor(vetor, posicao-1);
}
