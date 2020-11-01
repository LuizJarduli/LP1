#include <stdio.h>

//realizado em dupla com OANI DA SILVA DA COSTA

int RepeteDig(int N, int K, int rep);

int main(){

    int Num, Dig,qtdDig = 0, Total = 0;
    printf("Digite um Numero natural: ");
    scanf("%d", &Num);
    printf("Digite um numero e veja quantas vezes ele se repete no numero digitado: ");
    scanf("%d", &Dig);
    Total = RepeteDig(Num,Dig,qtdDig);
    printf("O digito se repete %d vezes\n", Total);
    return 0;
}

int RepeteDig(int N, int K, int rep){
    if(N == 0){
      //printf("%d \n", N);
      return rep;
    } else {
      if(N % 10 == K){
        rep++;
      }
      return RepeteDig(N / 10, K, rep);
    }

}
