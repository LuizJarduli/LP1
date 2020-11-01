/*
    8. Implemente uma fun��o que calcule a  �rea da superf�cie
    e o volume de uma esfera de raio R. Essa fun��o deve obedecer
    ao prot�tipo:
    void calc_esfera(float R, float *area, float *volume)
*/
#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

int main(){

    float raio, area, vol;
    area = 0;
    vol = 0;
    raio = 60;
    calc_esfera(raio, &area, &vol);
    printf("area da superficie da esfera: %.2f\n", area);
    printf("volume da esfera: %.2f\n", vol);
    return 0;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * 3.14 * pow(R,2);
    *volume = (4 * 3.14 * pow(R,3)) / 3;
}
