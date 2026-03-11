#include <stdio.h>
#include <string.h>
#include "contatos.h"

void buscar_contato(struct contato *p) {
    char input[50];
    int i;

    printf("digite o nome do contato: ");
    if (fgets(input, 50, stdin) != NULL) input[strcspn(input, "\n")] = 0;

    do {
        if (strcmp(input, p->nome) == 0) {
            printf("numero encontrado: %d\n\n", p->numero);
            break;
        }
        p++;
        i++;
    } while (p->nome[0] != '\000');

    if (strcmp(input, p->nome) != 0) printf("contato não encontrado\n\n");
} 