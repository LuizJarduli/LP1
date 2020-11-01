#include <stdio.h>

//realizado em dupla com OANI DA SILVA DA COSTA
int ChanceMegaSena(int vetor[], int i, int maxDezena1);

int main(){

    int numSena[6];
    int dezenaMax1 = 55;
    int inicio = 0;
    ChanceMegaSena(numSena,inicio,dezenaMax1);
}

int ChanceMegaSena(int vetor[], int i, int maxDezena1){
    if(maxDezena1 == 60){
        for(vetor[i] = i+1; vetor[i] <= maxDezena1; vetor[i] += 1){
            if(vetor[0] != vetor[1] && vetor[0] != vetor[2] && vetor[0] != vetor[3] && vetor[0] != vetor[4] && vetor[0] != vetor[5] &&
               vetor[1] != vetor[2] && vetor[1] != vetor[3] && vetor[1] != vetor[4] && vetor[1] != vetor[5] &&
               vetor[2] != vetor[3] && vetor[2] != vetor[4] && vetor[2] != vetor[5] &&
               vetor[3] != vetor[4] && vetor[3] != vetor[5] &&
               vetor[4] != vetor[5])
                printf("%d %d %d %d %d %d\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5]);
        }
    } else {
        for(vetor[i] = i+1; vetor[i] <= maxDezena1; vetor[i] += 1){
            ChanceMegaSena(vetor,i+1,maxDezena1+1);
        }
    }
}
