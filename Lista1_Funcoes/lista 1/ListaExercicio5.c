#include <stdio.h>
#include <stdlib.h>


int RetornaMaior(int N,int N2, int N3);

int main(){

    int num1,num2,num3, resultado;
    printf("digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("digite o segundo numero: ");
    scanf("%d", &num2);
    printf("digite o terceiro numero: ");
    scanf("%d", &num3);
    resultado = RetornaMaior(num1,num2,num3);
    printf("O maior numero e': %d", resultado);
}

int RetornaMaior(int N,int N2, int N3){
    int maior = N > N2 ? N : N2;
    maior = maior > N3 ? maior : N3;
    return maior;
}
