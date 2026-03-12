struct contato {
    char nome[50]; int numero;
};
void cadastrar_contato(struct contato *p);
void listar_contatos(struct contato *p, int n);
void buscar_contato(struct contato *p);
void editar_contato(struct contato *p);
void apagar_contatos(struct contato *p);
void estatistica(struct contato *p);