/* Algoritmo de Euclides - GCD - Maior divisor comum
 * Passos do algoritmo retirados do livro 
 * The art of computer programming, vol I, Donald Knuth, pag. 2 */

#include<stdio.h>
#include<string.h>

int gcd(int m, int n);

int main() {
    int m, n;
    printf("Entre com dois números m e n (separados por espaço):\n");
    scanf("%d %d", &m, &n);

    printf("Os números digitados são %d %d\n", m, n);

    printf("O maior divisor comum para %d e %d é %d\n", m, n, gcd(m, n));
}

/* Função recursiva gcd para dois inteiros m e n */
int gcd(int m, int n) {
    // resto da divisão de m por n
    int r = m % n;
    // se o resto for 0, então n é a resposta
    if (r == 0) {
       return n;
    } else {
        m = n;
        n = r;
        // chamada recursiva
        return gcd(m, n);
    } 
}
