#include <monetary.h>
#include <stdio.h>
#include <locale.h>

/*
 * Formata um numero para moeda 
 * a partir da entrada do console.
 */
int main() {
    double f;
    printf("Entre com um número: \n");
    scanf("%lf",&f);

	setlocale(LC_ALL,"pt_BR.UTF-8");
	printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );

	char buf[100];
	strfmon(buf, sizeof(buf), "%n", f);

	printf("Valor: %1s", buf);
}
