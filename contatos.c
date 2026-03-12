#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "contatos.h"


int main() {
    char escolha[3];
    struct contato lista[100] = {0};
    do {
        printf("1) Cadastrar\n");
        printf("2) Listar\n");
        printf("3) Buscar por nome\n");
        printf("4) Editar\n");
        printf("5) Excluir\n");
        printf("6) Estatisticas (recursivo)\n");
        printf("7) Sair\n");
        printf("Escolha uma opção: ");
        fgets(escolha, 3, stdin); //resultado: escolha = i\n\00

        switch(escolha[0]) {
            case '1':
                cadastrar_contato(&lista);
                break;
            case '2':
                {
                    // tam é usado para descobrir tamanho real do vetor
                    int tam = 0, i = 0;
                    while (lista[i].nome[0] != '\000') {
                        if (lista[i].nome[0] != '\n') tam++;
                        i++;
                    }
                    listar_contatos(&lista, tam);
                    break;
                }
            case '3':
                buscar_contato(&lista);
                break;
            case '4':
                editar_contato(&lista);
                break;
            case '5':
                apagar_contatos(&lista);
                break;
            case '7':
                {
                    int sair_escolha;
                    printf("\ntodos os contatos serão perdidos, tem certeza que quer sair (1 - sim 2 - nao)? ");
                    scanf("%d", sair_escolha);

                    if (sair_escolha != 1) printf("saindo do programa\n");
                    else {
                        printf("\n");
                        escolha[0] = '0';
                    }
                    break;
                }
            default:
                printf("\nesta opção é invalida ou não foi implementada.\n\n");
        }
    } while (escolha[0] != '7');
}