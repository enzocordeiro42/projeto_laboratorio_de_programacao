#include <stdio.h>
#include <string.h>
#include "contatos.h"

void editar_contato(struct contato *p) {
    char escolha[3];
    int i = 0;

    printf("\n1) por nome\n");
    printf("2) por numero\n");
    printf("escolha o metodo de busca: ");
    fgets(escolha, 3, stdin);

    switch (escolha[0]) {
        case '1':
            {
                char input[50];
                printf("\ndigite o nome do contato: ");
                if (fgets(input, 50, stdin) != NULL) input[strcspn(input, "\n")] = 0;
                
                do {
                // compara se nomes forem iguais
                if (strcmp(input, p->nome) == 0) {
                    printf("contato encontrado!\n");
                    printf("digite o novo nome do contato: ");
                    if (fgets(input, 50, stdin) != NULL) input[strcspn(input, "\n")] = 0;
                    strcpy(p->nome, input);

                    printf("digite o novo email do contato: ");
                    if (fgets(input, 50, stdin) != NULL) input[strcspn(input, "\n")] = 0;
                    strcpy(p->email, input);

                    printf("digite o novo numero do contato: ");
                    scanf("%d", &p->numero);
                    getchar();

                    printf("contato alterado com sucesso\n\n");
                    return;
                }
                p++;
                i++;
                } while (p->nome[0] != '\000');

                printf("contato não encontrado\n\n");
                break;
            }
        case '2':
        {
                char nome_input[50];
                int numero_input;
                printf("\ndigite o numero do contato: ");
                scanf("%d", &numero_input);
                getchar();
                
                do {
                // compara se numeros forem iguais
                if (numero_input == p->numero) {
                    printf("contato encontrado!\n");
                    printf("digite o novo nome do contato: ");
                    if (fgets(nome_input, 50, stdin) != NULL) nome_input[strcspn(nome_input, "\n")] = 0;
                    strcpy(p->nome, nome_input);

                    printf("digite o novo email do contato: ");
                    if (fgets(nome_input, 50, stdin) != NULL) nome_input[strcspn(nome_input, "\n")] = 0;
                    strcpy(p->email, nome_input);

                    printf("digite o novo numero do contato: ");
                    scanf("%d", &p->numero);
                    getchar();

                    printf("contato alterado com sucesso\n\n");
                    return;
                }
                p++;
                i++;
                } while (p->nome[0] != '\000');

                printf("contato não encontrado\n\n");
                break;
            }
    }
}