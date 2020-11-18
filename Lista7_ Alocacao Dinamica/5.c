/*
    5)  Crie um programa para manipular vetores. Implemente uma fun��o que receba um vetor de inteiros V e
    retorne um outro vetor de inteiros alocado dinamicamente com todos os valores de V que estejam entre o valor
    m�nimo e m�ximo (que tamb�m s�o passados como par�metro para a fun��o).

    A fun��o deve obedecer ao seguinte prot�tipo:

    int* valores_entre(int *v, int n, int min, int max, int *qtd);

    A fun��o recebe:
    - v: vetor de n�meros inteiros;
    - n: a quantidade de elementos do vetor v;
    - min: valor m�nimo a ser buscado;
    - max: valor m�ximo a ser buscado;

    A fun��o deve:
    - Verificar a quantidade de elementos do vetor que sejam maiores do que min e menores que max;
    - Caso a quantidade seja maior do que 0 (zero), alocar dinamicamente uma �rea do exato tamanho necess�rio para armazenar os valores;
    - Copia os elementos do vetor que sejam maiores do que min e menores que max para a �rea alocada dinamicamente.

    A fun��o retorna:
    - O endere�o da �rea alocada dinamicamente, preenchida com os n�meros maiores do que min e menores que max, ou NULL, caso essa
    rela��o de n�meros n�o tenha sido criada;
    - A quantidade de n�meros carregados na �rea alocada dinamicamente, atrav�s do par�metro qtd.

     Em seguida, crie a fun��o principal do programa para inicializar um vetor de inteiros, exibir
    esses valores na tela e pedir para o usu�rio digitar o valor m�nimo e m�ximo a ser buscado.
    Em seguida o programa dever� chamar a fun��o valores_entre e exibir na tela os valores resultantes. Lembre-se de exibir uma
    mensagem de erro caso nenhum valor seja  encontrado. N�o se esque�a de liberar a mem�ria alocada dinamicamente.
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

