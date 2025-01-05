#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n1, n2, media;

    printf("Informe a primeira nota: ");
    scanf("%d", &n1);

    printf("Informe a média entre as duas notas: ");
    scanf("%d", &media);

    n2 = 2 * media - n1;

    printf("A nota da outra prova é %d \n", n2);
    return 0;
}

