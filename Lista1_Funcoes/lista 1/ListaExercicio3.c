#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int RetornaDelta(int a, int b, int c);
int RetornaPosNeg(int N);
int VerificaNulo(int N);


int main(){
    int a, b, c, resultado;
    float raiz,x1,x2;
    printf("Aplicativo para calcular equacoes de segundo grau!\n\n");
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    raiz = 0;
    x1 = 0;
    x2 = 0;
    resultado = RetornaDelta(a,b,c);
    printf("\nO valor de delta e': %d\n", resultado);
    if(VerificaNulo(a) == 1){
        printf("\nNao apresenta Raizes pois o coeficiente A e' zero.\n");
    } else{
        if(RetornaPosNeg(resultado) == 1){
           printf("Erro, Delta negativo!");
        } else {
            raiz = sqrt(resultado);
            x1 = (-b + raiz) / 2*a;
            x2 = (-b - raiz) / 2*a;
            printf("Valor de x1 = %.1f \n", x1);
            printf("Valor de x2 = %.1f \n", x2);
        }
    }

}

int RetornaDelta(int a,int b, int c){
    int discriminante;
    //printf(" %d %d %d", a,b,c);
    discriminante = b*b - 4*a*c;
    return discriminante;
}
int RetornaPosNeg(int N){

    int result = 0;
    if(N < 0){
        result = 1;
    } else if(N>1){
        result = 0;
    } else{
        result = 2;
    }
    return result;
}
int VerificaNulo(int N){
    int result = 0;
    if(N == 0){
       result = 1;
    } else {
        result = 0;
    }
    return result;
}
