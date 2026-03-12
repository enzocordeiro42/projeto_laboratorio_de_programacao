#include <stdio.h>
#include <string.h>
#include "contatos.h"

void estatistica(struct contato *p)
{

int i = 0;
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;

 do {
        if (p->nome[0] == 'a' || p->nome[0] == 'A') {
           a++;
        }
        else if (p->nome[0] == 'b' || p->nome[0] == 'B') {
           b++;
        }
        else if (p->nome[0] == 'c' || p->nome[0] == 'C') {
           c++;
        }
        else if (p->nome[0] == 'd' || p->nome[0] == 'D') {
           d++;
        }
        else if (p->nome[0] == 'e' || p->nome[0] == 'E') {
           e++;
        }
        else if (p->nome[0] == 'f' || p->nome[0] == 'F') {
           f++;
        }
        else if (p->nome[0] == 'g' || p->nome[0] == 'G') {
           g++;
        }
        else if (p->nome[0] == 'h' || p->nome[0] == 'H') {
           h++;
        }
        else if (p->nome[0] == 'i' || p->nome[0] == 'I') {
           i++;
        }
        else if (p->nome[0] == 'j' || p->nome[0] == 'J') {
           j++;
        }
        else if (p->nome[0] == 'k' || p->nome[0] == 'K') {
           k++;
        }
        else if (p->nome[0] == 'l' || p->nome[0] == 'L') {
           l++;
        }
        else if (p->nome[0] == 'm' || p->nome[0] == 'M') {
           m++;
        }
        else if (p->nome[0] == 'n' || p->nome[0] == 'N') {
           n++;
        }
        else if (p->nome[0] == 'o' || p->nome[0] == 'O') {
           o++;
        }
        else if (p->nome[0] == 'p' || p->nome[0] == 'P') {
           p++;
        }
        else if (p->nome[0] == 'q' || p->nome[0] == 'Q') {
           q++;
        }
        else if (p->nome[0] == 'r' || p->nome[0] == 'R') {
           r++;
        }
        else if (p->nome[0] == 's' || p->nome[0] == 'S') {
           s++;
        }
        else if (p->nome[0] == 't' || p->nome[0] == 'T') {
           t++;
        }
        else if (p->nome[0] == 'u' || p->nome[0] == 'U') {
           u++;
        }
        else if (p->nome[0] == 'v' || p->nome[0] == 'V') {
           v++;
        }
        else if (p->nome[0] == 'w' || p->nome[0] == 'W') {
           w++;
        }
        else if (p->nome[0] == 'x' || p->nome[0] == 'X') {
           j++;
        }
        else if (p->nome[0] == 'y' || p->nome[0] == 'Y') {
           y++;
        }
        else if (p->nome[0] == 'z' || p->nome[0] == 'Z') {
           z++;
        }
        p++;
        i++;
    } while (p->nome[0] != '\000');


    if (a != 0){
        printf("a = %d", a);
    }
    else if (b != 0){
        printf("b = %d", b);
    }
    else if (c != 0){
        printf("c = %d", c);
    }
    else if (d != 0){
        printf("d = %d", d);
    }
    else if (e != 0){
        printf("b = %d", e);
    }
    else if (f != 0){
        printf("f = %d", f);
    }
    else if (g != 0){
        printf("g = %d", g);
    }
    else if (h != 0){
        printf("h = %d", h);
    }
    else if (i != 0){
        printf("i = %d", i);
    }
    else if (j != 0){
        printf("j = %d", j);
    }
    else if (k != 0){
        printf("k = %d", k);
    }
    else if (l != 0){
        printf("l = %d", l);
    }
    else if (m != 0){
        printf("m = %d", m);
    }
    else if (n != 0){
        printf("n = %d", n);
    }
    else if (o != 0){
        printf("o = %d", o);
    }
    else if (p != 0){
        printf("p = %d", p);
    }
    else if (q != 0){
        printf("q = %d", q);
    }
    else if (r != 0){
        printf("r = %d", r);
    }
    else if (s != 0){
        printf("s = %d", s);
    }
    else if (t != 0){
        printf("t = %d", t);
    }
    else if (u != 0){
        printf("u = %d", u);
    }
    else if (v != 0){
        printf("v = %d", v);
    }
    else if (w != 0){
        printf("w = %d", w);
    }
    else if (x != 0){
        printf("x = %d", x);
    }
    else if (y != 0){
        printf("y = %d", y);
    }
    else if (z != 0){
        printf("z = %d", z);
    }

};