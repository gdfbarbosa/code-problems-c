#include <stdio.h>
#include <stdlib.h>

/**
 * First example from K&R book.
 */
int main() {
    printf("hello, world\n");
    FILE* fp = fopen("/var/tmp/output.txt", "w+");
    fprintf(fp, "hello %s", "Guilherme");
    fclose(fp);
    return 0;
}
