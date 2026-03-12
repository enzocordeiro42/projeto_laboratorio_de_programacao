projeto da matéria laborátorio de programação
O projeto em questão consiste em um sistema/códigos de gerenciamento de contatos que tem os seguintes requisitos:

Requisitos funcionais:
    - Menu com as opções: 
        1) Cadastrar 
        2) Listar 
        3) Buscar por nome 
        4) Editar 
        5) Excluir,
        6) Estatísticas (recursivo) 
        7) Sair.
    Detalhamento:
        - Cadastro de contato usando struct e operações de strings
        - Busca por nome (case sensitive ou insensitive, a critério do grupo).
        - Edição e exclusão por índice ou nome (com verificação de existência).
        Estatísticas calculadas com função recursiva (por exemplo, contar contatos cujo nome tem comprimento acima de N; ou contatos com domínio específico de e-mail).[No caso do projeto em questão foi u contatode de letras inicias da lista dos contatos]

Requisistos não funcionais:

        - Uso de ponteiros e passagem por referência em funções (por exemplo, para editar registros).
        - Uso de funções para modularizar (ex.: cadastrarContato, listarContatos, buscarContato, editarContato, removerContato).
        - Uso de strings (funções da string.h e manipulação manual)
        - Pelo menos uma função recursiva com propósito justificável
        - Projeto dividido ao menos em: main.c e um arquivo de implementação complementar (ex.: contatos.c + contatos.h).


Instruções para compilação execução:
    Ao carregar o código em seu dispositivo, busque pelo executável para poder usar o sistema, caso queira verificar o código, vá a sua IDE e aba a pasta do código para ser apresentado a todos os arquivos de código




A estatística escolhida foi contagem das letras iniciais dos contatos cadastrados, para saber por exemplo se existem contatos com mesmo nome, ou nomes com a mesma incial o individuo vai saber sem ter que procurar diretamente na lista de contatos



Integrantes:
     
     - João Gabriel Martins Soares Santos - Ajudou a organizar e confecção das funções de lista de contatos
     - Enzo Souza Pantoja de Almeida Cordeiro - Fez as funções apagar, buscar, cadastrar, contatos, editar e listas
     - Gustavo Sobrinho Corrêa da Silva - fez a função estatistica e ajudou Enzo com as demais funções
     - Felype Trindade de Sousa Lôbo - Ajudou a fazer a função cadastrar
