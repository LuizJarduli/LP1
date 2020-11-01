#include <stdio.h>

//realizado em dupla com OANI DA SILVA DA COSTA


int mdc(int x, int y);

int main(){

  int x, y, MDC;
  x = 2;
  y = 6;

  MDC = mdc(x,y);
  printf("%d", MDC);
  return 0;
}

int mdc(int x, int y){
    if(y == 0){
        return x;
    } else {
        return mdc(y, x%y);
    }
}
