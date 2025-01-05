#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int termos;

    printf("Informe a quantidade de termos: ");
    scanf("%d", &termos);

    if (termos % 2 == 0) {
        printf("Resultado: 0 \n");
    } else {
        printf("Resultado: 1\ n");
    }
    return 0;
}

