#include <stdio.h>

//realizado em dupla com OANI DA SILVA DA COSTA

int soma(int N);

int main(){

  int N, SOMA = 0;
  printf("Digite um numero: ");
  scanf("%d", &N);
  SOMA = soma(N);
  printf("%d", SOMA);
  return 0;
}

int soma(int N){

    if(N == 0){
        return 0;
    } else {
        return N += soma(N-1);
    }
}
