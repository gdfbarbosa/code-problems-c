/* Implementação de Fatorial com programação estruturada e recursividade */

#include<stdio.h>
#include<string.h>

int factorial(int n);

int main() {
    int n;
    printf("Entre com um número\n");
    scanf("%d",&n);
    printf("O número digitado é %d\n", n);
    printf("O fatorial de %d é %d\n", n, factorial(n));
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
