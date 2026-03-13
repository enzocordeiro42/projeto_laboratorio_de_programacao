#include <stdio.h>
#include <string.h>
#include "contatos.h"

void estatistica(struct contato *p, int letras[26])
{

    if (p ->nome[0] == '\000'){

      printf("Lista alfabetica \n\n");

         for(int i = 0; i < 26; i++){
                    if(letras[i] > 0){
                        printf("%c = %d\n", 'a' + i, letras[i]);
                    }
                }

        return;
    }
    
char letra = p->nome[0];

        if (p->nome[0] == 'a' || p->nome[0] == 'A') {
           letras[0]++;
        }
        else if (p->nome[0] == 'b' || p->nome[0] == 'B') {
           letras[1]++;
        }
        else if (p->nome[0] == 'c' || p->nome[0] == 'C') {
           letras[2]++;
        }
        else if (p->nome[0] == 'd' || p->nome[0] == 'D') {
           letras[3]++;
        }
        else if (p->nome[0] == 'e' || p->nome[0] == 'E') {
           letras[4]++;
        }
        else if (p->nome[0] == 'f' || p->nome[0] == 'F') {
           letras[5]++;
        }
        else if (p->nome[0] == 'g' || p->nome[0] == 'G') {
           letras[6]++;
        }
        else if (p->nome[0] == 'h' || p->nome[0] == 'H') {
           letras[7]++;
        }
        else if (p->nome[0] == 'i' || p->nome[0] == 'I') {
           letras[8]++;
        }
        else if (p->nome[0] == 'j' || p->nome[0] == 'J') {
           letras[9]++;
        }
        else if (p->nome[0] == 'k' || p->nome[0] == 'K') {
           letras[10]++;
        }
        else if (p->nome[0] == 'l' || p->nome[0] == 'L') {
           letras[11]++;
        }
        else if (p->nome[0] == 'm' || p->nome[0] == 'M') {
           letras[12]++;
        }
        else if (p->nome[0] == 'n' || p->nome[0] == 'N') {
           letras[13]++;
        }
        else if (p->nome[0] == 'o' || p->nome[0] == 'O') {
           letras[14]++;
        }
        else if (p->nome[0] == 'p' || p->nome[0] == 'P') {
           letras[15]++;
        }
        else if (p->nome[0] == 'q' || p->nome[0] == 'Q') {
           letras[16]++;
        }
        else if (p->nome[0] == 'r' || p->nome[0] == 'R') {
           letras[17]++;
        }
        else if (p->nome[0] == 's' || p->nome[0] == 'S') {
           letras[18]++;
        }
        else if (p->nome[0] == 't' || p->nome[0] == 'T') {
           letras[19]++;
        }
        else if (p->nome[0] == 'u' || p->nome[0] == 'U') {
           letras[20]++;
        }
        else if (p->nome[0] == 'v' || p->nome[0] == 'V') {
           letras[21]++;
        }
        else if (p->nome[0] == 'w' || p->nome[0] == 'W') {
           letras[22]++;
        }
        else if (p->nome[0] == 'x' || p->nome[0] == 'X') {
           letras[23]++;
        }
        else if (p->nome[0] == 'y' || p->nome[0] == 'Y') {
           letras[24]++;
        }
        else if (p->nome[0] == 'z' || p->nome[0] == 'Z') {
           letras[25]++;
        }


 estatistica(p + 1, letras);

}