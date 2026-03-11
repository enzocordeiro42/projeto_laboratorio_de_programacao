#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "contatos.h"

void cadastrar_contato(struct contato *p) {
    bool stop = false;
    do {
        // se nome for nulo ou primeiro caracter tiver \n
        if (*p->nome == '\000' || p->nome[0] == '\n') {
            char input[50];

            // prompt ao usuario
            printf("\ndigite o nome do novo contato: ");
            if (fgets(input, 50, stdin) != NULL) input[strcspn(input, "\n")] = 0;
            strcpy(p->nome, input);

            printf("digite o numero do novo contato: ");
            scanf("%d", &p->numero);
            getchar();

            printf("\nnumero cadastrado\n\n");
            stop = true;
        } else p++;
    } while(stop != true);
}