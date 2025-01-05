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
        printf("São múltiplos \n");
    } else {
        printf("Não são múltiplos \n");
    }
    
    return 0;
}

