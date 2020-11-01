#include <stdio.h>
#include <stdlib.h>

float Media3n(float N,float N2,float N3);
float Media2n(float N,float N2);
float RetornaMaior(float N,float N2, float N3);
float RetornaMenor(float N,float N2, float N3);

int main(){
    float nota1, nota2, nota3, mediaPonderada, maiorN, menorN, mediaFinal;
    mediaPonderada = 0;
    mediaFinal = 0;
    menorN = 0;
    maiorN = 0;
    printf("Calculo de media escolar, digite a nota de suas tres provas!\n\n");
    printf("Nota 1: ");
    scanf(" %f", &nota1);
    printf("Nota 2: ");
    scanf(" %f", &nota2);
    printf("Nota 3: ");
    scanf(" %f", &nota3);
    mediaPonderada = Media3n(nota1,nota2,nota3);
    maiorN = RetornaMaior(nota1, nota2, nota3);
    menorN = RetornaMenor(nota1, nota2, nota3);
    if(menorN == nota1){
        mediaFinal = Media2n(nota2, nota3);
    } else if(menorN == nota2){
        mediaFinal = Media2n(nota1, nota3);
    } else if(menorN == nota3){
        mediaFinal = Media2n(nota2, nota1);
    }
    printf("\nMedia Ponderada de suas 3 notas: %.2f\n", mediaPonderada);
    printf("Media Final (2 notas mais altas): %.2f\n", mediaFinal);
    printf("Maior Nota:  %.2f\n", maiorN);
    printf("Menor Nota:  %.2f\n", menorN);

}
float Media3n(float N,float N2,float N3){
    float media = (N + N2 + N3) / 3;
    return media;
}
float Media2n(float N,float N2){
    float media = (N + N2)/2;
    return media;
}
float RetornaMenor(float N,float N2, float N3){
    float menor = N < N2 ? N : N2;
    menor = menor < N3 ? menor : N3;
    return menor;
}

float RetornaMaior(float N,float N2, float N3){
    float maior = N > N2 ? N : N2;
    maior = maior > N3 ? maior: N3;
    return maior;
}
