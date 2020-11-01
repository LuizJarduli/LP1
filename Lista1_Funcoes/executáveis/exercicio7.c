#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado();

int main(){
    int N = 0;
    N = Dado();
    printf("O numero sorteado foi: %d\n", N);
}

int Dado(){
    srand(time(NULL));
    int randomico;
    randomico = (rand() % 5);
    randomico++;
    return randomico;
}
