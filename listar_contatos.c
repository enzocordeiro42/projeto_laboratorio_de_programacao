#include <stdio.h>
#include "contatos.h"

void listar_contatos(struct contato *p, int n) {
    if (n != 0) {
        int i = 0;
        while (p->nome[0] != '\000') {
            printf("contato %d:\n", i+1);
            printf("nome: %s", p->nome);
            printf("numero: %d\n\n", p->numero);
            p++;
            i++;
        }
    }else printf("lista de contatos esta vazia\n\n");
}