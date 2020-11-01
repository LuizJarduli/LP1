#include <stdio.h>

//realizado em dupla com OANI DA SILVA DA COSTA


int inverte(int n);

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    inverte(numero);
}

int inverte(int n){

    if(n == 0){
        return n;
    } else {
        printf("%d", n%10);
        n = n /10;
        return inverte(n);
    }
}
