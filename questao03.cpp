#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b;
    
    printf("Informe o valor de A: ");
    scanf("%d", &a);
    
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    
    if (a % b == 0 || b % a == 0) {
        printf("S�o m�ltiplos \n");
    } else {
        printf("N�o s�o m�ltiplos \n");
    }
    
    return 0;
}

