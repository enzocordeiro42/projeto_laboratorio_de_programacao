#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "contatos.h"

void cadastrar_contato(struct contato *p) {
    bool stop = false;
    do {
        if (*p->nome == '\000') {
            char input[50];

            printf("digite o nome do novo contato: ");
            if (fgets(input, 50, stdin) != NULL) input[strcspn(input, "\n")] = 0;
            strcpy(p->nome, input);

            printf("digite o numero do novo contato: ");
            scanf("%d", &p->numero);
            getchar();

            printf("numero cadastrado\n\n");
            stop = true;
        } else p++;
    } while(stop != true);
}