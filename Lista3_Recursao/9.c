#include <stdio.h>

//realizado em dupla com OANI DA SILVA DA COSTA

void permutaRecursivo(char vetor[], int inf, int sup)
{
	if(inf == sup)
	{
		for(int i = 0; i <= sup; i++){
            if(vetor[i] != '\0'){
                printf("%c ", vetor[i]);
            }
		}
		printf("\n");
	}
	else
	{
		for(int i = inf; i <= sup; i++)
		{

			int aux = vetor[inf];
			vetor[inf] = vetor[i];
			vetor[i] = aux;
			permutaRecursivo(vetor, inf + 1, sup);
			aux = vetor[inf];
			vetor[inf] = vetor[i];
			vetor[i] = aux;
		}
	}
}

int main()
{
	char alfa[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int n, i = 0;
	printf("Digite o numero para gerar permutacoes possiveis com as letras correspondentes ao alfabeto: ");
	scanf("%d", &n);
    char alfaPermuta[n];
    for(i = 0; i < n; i++){
        if(i == n){
            alfaPermuta[i] = '\0';
        } else {
            alfaPermuta[i] = alfa[i];
        }
    }

	permutaRecursivo(alfaPermuta, 0, n-1);

	return 0;
}





