#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int codigo;
    char nome[100];
    char telefone[20];
    char endereco[150];
    char email[100];
} Contato;

void flush_in();
void imprimeCabecalho();
void limparMemoria(Contato *ptr);
void inserirContato(Contato *ptr, int tam);
void listarContatos(Contato *ptr, int tam);
void pesquisarPorEmail(Contato *ptr, int tam);
void pesquisarPorCodigo(Contato *ptr, int tam);
void alterarDados(Contato *ptr, int tam);
void excluirContato(Contato *ptr, int *tam);

int main(){


    Contato *contato;
    int i = 1, menu;
    contato = (Contato *) malloc(sizeof(Contato));
    while(menu != 6){
        imprimeCabecalho();
        printf("Selecione Uma opcao: ");
        scanf("%d", &menu);
        switch(menu){
        //opcao 7 se quiser listar
        case 7:
            listarContatos(contato, i-1);
            break;
        case 6:
            printf("\nSair\n");
            break;
        case 5:
            printf("Excluir contato pelo codigo\n");
            excluirContato(contato, &i);
            break;
        case 4:
            printf("Alterar dados de um contato\n");
            alterarDados(contato, i);
            listarContatos(contato,i);
            break;
        case 3:
            printf("Pesquisar pelo codigo\n");
            pesquisarPorCodigo(contato, i);
            break;
        case 2:
            printf("Pesquisar pelo email\n");
            pesquisarPorEmail(contato, i);
            break;
        case 1:
            printf("Cadastrar um novo contato\n\n");
            if(i == 0) contato = (Contato *) realloc(contato, 1 * sizeof(Contato));
            inserirContato(contato, i);
            listarContatos(contato,i);
            i++;
            contato = (Contato *) realloc(contato, i * sizeof(Contato));
            if(!contato){
                printf("\nErro ao realocar memoria! Tente novamente");
                free(contato);
                exit;
            }

            break;
        default:
            printf("Escolha uma opcao valida!\n");
            break;

        }
        system("pause");
        system("cls");

    }
    limparMemoria(contato);
    return 0;
}

void listarContatos(Contato *ptr, int tam){
    int i;
    printf("----------------------Agenda-----------------------\n");
    if(tam == 0){
        printf("\nVoce nao possui nenhum contato registrado.\n\n");
    } else {
        for(i = 0; i < tam; i++){
            //printf("\nContato %d =======> \n", i+1);
            printf("Codigo: %d\n", ptr[i].codigo);
            printf("Nome: %s\n", ptr[i].nome);
            printf("Telefone: %s\n", ptr[i].telefone);
            printf("E-mail: %s\n", ptr[i].email);
            printf("Endereco: %s\n", ptr[i].endereco);
            printf("---------------------------------------------------\n");
        }
    }
}

void excluirContato(Contato *ptr, int *tam){
    if(*tam <= 1){
        printf("\nVoce nao possui nenhum contato registrado.\n\n");
    } else {
        char resp;
        int cod;
        int i, k=0, x=0, fila = 0;
        printf("Informe o codigo do item a ser excluido: ");
        scanf("%d", &cod);
        flush_in();
        for(i = 0; i < *tam; i++){
            if(cod == ptr[i].codigo){
                k++;
            }
        }
        if(k > 0){
            printf("Contatos encontrados: %d\n",k);
            printf("----------------------Agenda-----------------------\n");
            for(i = 0; i < *tam; i++){
                if(cod == ptr[i].codigo){
                    printf("Codigo: %d\n", ptr[i].codigo);
                    printf("Nome: %s\n", ptr[i].nome);
                    printf("Telefone: %s\n", ptr[i].telefone);
                    printf("E-mail: %s\n", ptr[i].email);
                    printf("Endereco: %s\n", ptr[i].endereco);
                    printf("---------------------------------------------------\n\n");
                }
            }
            printf("Deseja excluir esse registro (S/N)? ");
            scanf("%c", &resp);
            getchar();
            if(resp == 'S' || resp == 's'){
                printf("codigo do registro : %d\n", cod);
                for(i = 0; i < *tam; i++){
                    if(cod == ptr[i].codigo){
                        for (k = i;k < *tam - 1; ++k){
                            ptr[k] = ptr[k + 1];
                        }
                        (*tam)--;
                        ptr = (Contato *) realloc(ptr, (*tam) * sizeof(Contato));

                    }
                }
                printf("Registro excluido com sucesso!\n\n");
                listarContatos(ptr, *(tam)-1);
            } else if(resp == 'N' || resp == 'n'){
                printf("\nOperacao Abortada!\n\n");
                return;
            } else {
                printf("\nResposta invalida! Abortando operacao\n\n");
            }
        } else {
            printf("Nenhum contato possui esse codigo! Tente novamente\n");
        }
    }
}
void alterarDados(Contato *ptr, int tam){
    char resp;
    int cod;
    int i, k = 0;
    printf("Informe o codigo do(s) item(ns) a ser(em) alterado(s): ");
    scanf("%d", &cod);
    flush_in();
    for(i = 0; i < tam; i++){
        if(cod == ptr[i].codigo){
            k++;
        }
    }
    if(k > 0){
        printf("Contatos encontrados: %d\n",k);
        printf("----------------------Agenda-----------------------\n");
        for(i = 0; i < tam; i++){
            if(cod == ptr[i].codigo){
                printf("Codigo: %d\n", ptr[i].codigo);
                printf("Nome: %s\n", ptr[i].nome);
                printf("Telefone: %s\n", ptr[i].telefone);
                printf("E-mail: %s\n", ptr[i].email);
                printf("Endereco: %s\n", ptr[i].endereco);
                printf("---------------------------------------------------\n\n");
            }
        }
        printf("Deseja Alterar esse(s) registro(s) (S/N)? ");
        scanf("%c", &resp);
        getchar();
        if(resp == 'S' || resp == 's'){
            printf("codigo do registro : %d\n", cod);
            for(i = 0; i < tam; i++){
                if(cod == ptr[i].codigo){

                    printf("Informe o nome: ");
                    gets(ptr[i].nome);

                    printf("Informe o telefone: ");
                    gets(ptr[i].telefone);

                    printf("Informe o email: ");
                    gets(ptr[i].email);

                    printf("Informe o endereco: ");
                    gets(ptr[i].endereco);

                    printf("\nContato alterado com sucesso!\n");
                }
            }
        } else if(resp == 'N' || resp == 'n'){
            printf("\nOperacao Abortada!\n\n");
            return;
        } else {
            printf("\nResposta invalida! Abortando operacao\n\n");
        }
    } else {
        printf("Nenhum contato possui esse codigo! Tente novamente\n\n");
    }

}

void pesquisarPorCodigo(Contato *ptr, int tam){
    int cod;
    int i, k = 0;
    printf("Informe o codigo: ");
    scanf("%d", &cod);
    flush_in();
    for(i = 0; i < tam; i++){
        if(cod == ptr[i].codigo){
            k++;
        }
    }
    if(k > 0){
        printf("Contatos encontrados: %d\n",k);
        printf("----------------------Agenda-----------------------\n");
        for(i = 0; i < tam; i++){
            if(cod == ptr[i].codigo){
                printf("Codigo: %d\n", ptr[i].codigo);
                printf("Nome: %s\n", ptr[i].nome);
                printf("Telefone: %s\n", ptr[i].telefone);
                printf("E-mail: %s\n", ptr[i].email);
                printf("Endereco: %s\n", ptr[i].endereco);
                printf("---------------------------------------------------\n\n");
            }
        }
    } else {
        printf("Nenhum contato possui esse codigo! Tente novamente\n");
    }
}

void pesquisarPorEmail(Contato *ptr, int tam){
    getchar();
    char email[100];
    int i, k = 0;
    printf("Informe o Email: ");
    gets(email);
    for(i = 0; i < tam; i++){
        if(strcmp(email, ptr[i].email) == 0){
            k++;
        }
    }
    if(k > 0){
        printf("Contatos encontrados: %d\n",k);
        printf("----------------------Agenda-----------------------\n");
        for(i = 0; i < tam; i++){
            if(strcmp(email, ptr[i].email) == 0){
                printf("Codigo: %d\n", ptr[i].codigo);
                printf("Nome: %s\n", ptr[i].nome);
                printf("Telefone: %s\n", ptr[i].telefone);
                printf("E-mail: %s\n", ptr[i].email);
                printf("Endereco: %s\n", ptr[i].endereco);
                printf("---------------------------------------------------\n");
            }
        }
    } else {
        printf("Nenhum contato possui esse E-mail! Tente novamente\n");
    }



}

void inserirContato(Contato *ptr, int tam){

    getchar();
    printf("Informe o Codigo: ");
    scanf("%d", &ptr[tam-1].codigo);
    flush_in();

    printf("Informe o nome: ");
    gets(ptr[tam-1].nome);

    printf("Informe o telefone: ");
    gets(ptr[tam-1].telefone);

    printf("Informe o email: ");
    gets(ptr[tam-1].email);

    printf("Informe o endereco: ");
    gets(ptr[tam-1].endereco);

    printf("\nContato adicionado com sucesso!\n");

}

void imprimeCabecalho(){
        printf("-----Bem vindo a sua agenda telefonica!---------\n\n");
        printf("Menu: \n1 - Cadastrar contatos             |\t2 - Pesquisar contato pelo email |\n3 - Pesquisar contato pelo codigo  |\t4 - Alterar dados de um contato  |\n5 - Excluir um contato pelo codigo |\t6 - Sair                         |\n\n");
}

void flush_in(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

void limparMemoria(Contato *ptr){
    free(ptr);
}
