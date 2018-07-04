#include <string.h>
#include <stdio.h>

/*
 * Formata um numero para moeda 
 * a partir da entrada do console.
 */
int main() {
    char dest[40];
	char src[40];

	memset(dest, '\0', sizeof(dest));

	strcpy(src, "Another string");
	strcpy(dest, src);

    printf("String: %s\n", dest);
}
