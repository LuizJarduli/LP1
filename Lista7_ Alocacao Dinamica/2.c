/*

    2) Fa�a uma fun��o que receba um valor n e crie dinamicamente um vetor de n
    elementos e retorne um ponteiro. Crie uma fun��o que receba um ponteiro para um
    vetor e um valor n e imprima os n elementos desse vetor. Construa tamb�m uma
    fun��o que receba um ponteiro para um vetor e libere esta �rea de mem�ria. Ao final,
    crie uma fun��o principal que leia um valor n e chame a fun��o criada acima. Depois,
    a fun��o principal deve ler os n elementos desse vetor. Ent�o, a fun��o principal deve
    chamar a fun��o de impress�o dos n elementos do vetor criado e, finalmente, liberar a
    mem�ria alocada atrav�s da fun��o criada para libera��o.
*/
#include <stdio.h>
#include <stdlib.h>


int * criaVetor(int tam);
void imprimir(int *ptr, int n);
void liberarMemoria(int *ptr);

int main(){
    int tam, *vet, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = criaVetor(tam);

    for(int i = 0; i < tam; i++){
        printf("Digite um valor: ");
        scanf("%i", &vet[i]);
    }

    imprimir(vet,tam);

    liberarMemoria(vet);

    return 0;

}

int * criaVetor(int tam){
    int *p = (int *) malloc(tam * sizeof(int));
    if(!p){
        printf("** Erro : Memoria insuficiente**\n");
        exit;
    }
    else{
        printf("**Memoria Alocada com sucesso**\n");
    }
    return p;
}

void imprimir(int *ptr, int n){
    int i;
    for(i = 0; i < n ; i++){
        printf("\nValor na posicao %d do vetor: %i", i+1, ptr[i]);
    }
}

void liberarMemoria(int *ptr){
    free(ptr);
    printf("\nMemoria liberada!!!!!");
}
