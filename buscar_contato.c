#include <stdio.h>
#include <string.h>
#include "contatos.h"

void buscar_contato(struct contato *p) {
    char input[50];
    int i;

    printf("\ndigite o nome do contato: ");
    if (fgets(input, 50, stdin) != NULL) input[strcspn(input, "\n")] = 0;

    do {
        // compara se nomes forem iguais
        if (strcmp(input, p->nome) == 0) {
            printf("contato encontrado: \n");
            printf("email: %d\n", p->email);
            printf("numero: %d\n\n", p->numero);
            return;
        }
        p++;
        i++;
    } while (p->nome[0] != '\000');

    printf("contato não encontrado\n\n");
} 