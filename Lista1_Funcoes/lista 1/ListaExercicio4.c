#include <stdio.h>
#include <stdlib.h>


int RetornaMenor2(int N,int N2);

int main(){

    int num1,num2, resultado;
    printf("digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("digite o segundo numero: ");
    scanf("%d", &num2);
    resultado = RetornaMenor2(num1,num2);
    printf("O menor numero e': %d", resultado);
}

int RetornaMenor2(int N,int N2){
    int menor = 0;
    if(N > N2){
        menor = N2;
    } else if(N < N2){
        menor = N;
    } else{
        menor = N;
    }
    return menor;
}
