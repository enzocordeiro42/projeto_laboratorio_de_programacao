#include <stdio.h>
#include "contatos.h"

void listar_contatos(struct contato *p, int n) {
    printf("\n");
    // verificação do tamanho real do vetor
    if (n != 0) {
        // mostrar todos os contatos validos ao usuario
        int i = 0;
        while (p->nome[0] != '\000') {
            if (p->nome[0] != '\n') {
                printf("contato %d:\n", i+1);
                printf("nome: %s\n", p->nome);
                printf("numero: %d\n\n", p->numero);
            }
            p++;
            i++;
        }
    }else printf("lista de contatos esta vazia\n\n");
}