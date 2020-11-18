/*
    5)  Crie um programa para manipular vetores. Implemente uma função que receba um vetor de inteiros V e
    retorne um outro vetor de inteiros alocado dinamicamente com todos os valores de V que estejam entre o valor
    mínimo e máximo (que também são passados como parâmetro para a função).

    A função deve obedecer ao seguinte protótipo:

    int* valores_entre(int *v, int n, int min, int max, int *qtd);

    A função recebe:
    - v: vetor de números inteiros;
    - n: a quantidade de elementos do vetor v;
    - min: valor mínimo a ser buscado;
    - max: valor máximo a ser buscado;

    A função deve:
    - Verificar a quantidade de elementos do vetor que sejam maiores do que min e menores que max;
    - Caso a quantidade seja maior do que 0 (zero), alocar dinamicamente uma área do exato tamanho necessário para armazenar os valores;
    - Copia os elementos do vetor que sejam maiores do que min e menores que max para a área alocada dinamicamente.

    A função retorna:
    - O endereço da área alocada dinamicamente, preenchida com os números maiores do que min e menores que max, ou NULL, caso essa
    relação de números não tenha sido criada;
    - A quantidade de números carregados na área alocada dinamicamente, através do parâmetro qtd.

     Em seguida, crie a função principal do programa para inicializar um vetor de inteiros, exibir
    esses valores na tela e pedir para o usuário digitar o valor mínimo e máximo a ser buscado.
    Em seguida o programa deverá chamar a função valores_entre e exibir na tela os valores resultantes. Lembre-se de exibir uma
    mensagem de erro caso nenhum valor seja  encontrado. Não se esqueça de liberar a memória alocada dinamicamente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

int* valores_entre(int *v, int n, int min, int max, int *qtd);
void imprimir(int *v, int tam);
void liberarMemoria(int *v);

int main(){

    int vetor[TAM], *vet, min, max, n, qtd, aux;

    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        aux = rand() % 100+1;
        vetor[i] = aux;
    }

    imprimir(vetor, TAM);

    printf("Digite um valor minimo pra ser buscado: ");
    scanf("%d", &min);
    printf("Digite um valor maximo pra ser buscado: ");
    scanf("%d", &max);

    qtd = 0;
    n = TAM;

    vet = valores_entre(vetor, n, min, max, &qtd);
    printf("\nValores encotrados entre o min e max digitado: \n");
    if(qtd == 0){
        printf("NULL\n");
        return 0;
    } else {
        imprimir(vet, qtd);
    }
    liberarMemoria(vet);
    return 0;
}

int* valores_entre(int *v, int n, int min, int max, int *qtd){
    int *ptr;
    for(int i = 0; i < n; i++){
        if(v[i] > min && v[i] < max) (*qtd)++;
    }
    if(*qtd > 0){
        ptr = (int *) malloc((*qtd) * sizeof(int));
        if(!ptr){
            printf("\nMemoria nao alocada!\n");
            exit;
        } else {
            printf("\nMemoria alocada com sucesso!\n");
        }
        int aux = 0;
        for(int i = 0; i < n; i++){
            if(v[i] > min && v[i] < max){
                    ptr[aux] = v[i];
                    aux++;
            }
        }

    }

    return ptr;
}

void liberarMemoria(int *v){
    printf("\nMemoria liberada\n");
    free(v);
}

void imprimir(int *v, int tam){
    for(int i = 0; i < tam ; i++){
        if(i == tam-1) printf("%d\n\n", v[i]);
        else printf(" %d | ", v[i]);
    }
}

