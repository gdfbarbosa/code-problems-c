/* Implementação de Fibonacci com programação estruturada */
#include<stdio.h>
#include<string.h>

int fibonacci(int n);

int main() {
	int n;
	printf("Entre com um número\n");
    scanf("%d",&n);

	printf("O número digitado é %d\n", n);

	char sequencia[100] = "";

	int i;
	for (i = 1; i <= n; i++) {
		char buf[sizeof(int)*3+2];
		snprintf(buf, sizeof buf, "%d ", fibonacci(i));
		strncat(sequencia, buf, 15);
	}

	printf("A sequência fibonacci de %d é %s\n", n, sequencia);
}

/* Função fibonacci utilizando o conceito de recursividade */
int fibonacci(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
      return fibonacci(n-1) + fibonacci(n-2);
	}
}
