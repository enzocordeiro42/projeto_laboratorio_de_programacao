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
        fgets(escolha, 3, stdin); //resultado: escolha = i\0\n

        switch(escolha[0]) {
            case '1':
                cadastrar_contato(&lista);
                break;
            case '2':
                {
                    int tam = 0, i = 0;
                    while (lista[i].nome[0] != '\000') {
                        tam++;
                        i++;
                    }
                    listar_contatos(&lista, tam);
                    break;
                }
        }
    } while (escolha[0] != '7');
}