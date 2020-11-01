#include <stdio.h>
#include <stdlib.h>


float ConverterTemperatura(float temp, char escala);

int main(){
    char siglaT;
    float temp, converter;
    temp = 0;
    converter = 0;
    printf("Conversor de temperaturas!\n");
    printf("Selecione uma temperatura de entrada que sera convertida, C - para Celsius ou F - Farenheit : \n");
    scanf(" %c", &siglaT);
    printf("Agora digite a temperatura na escala escolhida acima: \n");
    scanf(" %f", &temp);
    converter = ConverterTemperatura(temp, siglaT);
    if(siglaT == 'F' || siglaT == 'f'){
        printf("A Temperatura convertida em Celsius e': %.2f\n", converter);
    } else if(siglaT == 'C' || siglaT == 'c'){
        printf("A Temperatura convertida em Farenheit e': %.2f\n", converter);
    }

}

float ConverterTemperatura(float temp, char escala){
    float resultado;
    resultado = 0;
    switch(escala){
        case 'f':
        case 'F':
            resultado = (5*(temp-32))/9;
            break;
        case 'c':
        case 'C':
            resultado = ((9*temp)/5)+32;
            break;

    }
    return resultado;
}
