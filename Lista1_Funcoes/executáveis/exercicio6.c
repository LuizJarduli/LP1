#include <stdio.h>
#include <stdlib.h>


int RetornaMenor(int N,int N2, int N3);

int main(){

    int num1,num2,num3, resultado;
    printf("digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("digite o segundo numero: ");
    scanf("%d", &num2);
    printf("digite o terceiro numero: ");
    scanf("%d", &num3);
    resultado = RetornaMenor(num1,num2,num3);
    printf("O menor numero e': %d", resultado);
}

int RetornaMenor(int N,int N2, int N3){
    int menor = 0;
    if(N < N2 && N < N3){
        menor = N;
    } else if(N < N2 && N > N3){
        menor = N3;
    } else if(N2 < N && N2 < N3){
        menor = N2;
    } else if(N2 < N && N2 > N3) {
        menor = N3;
    } else if(N == N2 && N > N3){
        menor = N3;
    } else if(N == N2 && N < N3){
        menor = N;
    } else if(N == N3 && N < N2){
        menor = N;
    } else if(N == N3 && N > N2) {
        menor = N2;
    } else {
        menor = N;
    }
    return menor;
}
