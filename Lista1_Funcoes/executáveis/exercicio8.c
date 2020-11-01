#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado();

int main(){
    int N, total1, total2, total3, total4, total5, total6;
    N = 0;
    total1 = 0;
    total2 = 0;
    total3 = 0;
    total4 = 0;
    total5 = 0;
    total6 = 0;
    srand(time(NULL));
    for(int i=0; i<1000000;i++){
        N = Dado();
        if(N == 1){
            total1++;
        } else if(N == 2){
            total2++;
        } else if(N == 3){
            total3++;
        } else if(N == 4){
            total4++;
        } else if(N == 5){
            total5++;
        } else if(N == 6){
            total6++;
        }
    }
    printf("O dado foi lancado 1 milhao de vezes.\n");
    printf("O numero 1 foi sorteado %d vezes, cerca de %.2f porcento\n", total1, (float)total1/10000);
    printf("O numero 2 foi sorteado %d vezes, cerca de %.2f porcento\n", total2, (float)total2/10000);
    printf("O numero 3 foi sorteado %d vezes, cerca de %.2f porcento\n", total3, (float)total3/10000);
    printf("O numero 4 foi sorteado %d vezes, cerca de %.2f porcento\n", total4, (float)total4/10000);
    printf("O numero 5 foi sorteado %d vezes, cerca de %.2f porcento\n", total5, (float)total5/10000);
    printf("O numero 6 foi sorteado %d vezes, cerca de %.2f porcento\n", total6, (float)total6/10000);

}

int Dado(){
    int randomico;
    randomico = (rand() % 6) + 1;
    return randomico;
}
