/*
 ============================================================================
 Ejercicio 1-10 in C, Ansi-style
 Felitti Renzo
 19/4/2015 
 ============================================================================
 */
#include <stdio.h>

void imprimirMensajeModificado(int c, int esCaracterNormal) {

	while ((c = getchar()) != EOF) {
		esCaracterNormal=1;
		if (c == '\t') {
			printf("\\t");
			esCaracterNormal = 0;
		} else if (c == '\b') {
			printf("\\b");
			esCaracterNormal = 0;
		} else if (c == '\\') {
			printf("\\");
			esCaracterNormal = 0;
		} else if (esCaracterNormal == 1) {
			printf("%c", c);
		}
	}
}


main(){

	int c = 0;
	// esCaracterNormal = 0 (FALSE), = 1 (TRUE)
	int esCaracterNormal = 1;

	imprimirMensajeModificado(c, esCaracterNormal);

}

