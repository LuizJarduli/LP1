#include <stdio.h>

//realizado em dupla com OANI DA SILVA DA COSTA

int incrementCrescente(int n, int cont);

int main(){
    int i = 0, n;
    printf("Entre com um numero positivo e veja a ordem de 0 ate ele! => ");
    scanf("%d", &n);
    incrementCrescente(n, i);
    return 0;
}

int incrementCrescente(int n, int cont){
  printf("\n%d", cont);
  if(cont == n){
    return cont;
  } else {
    return incrementCrescente(n, cont+1);
  }
}


