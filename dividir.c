#include <stdio.h>

int dividir(int a, int b) {
    if (b == 0) {
        printf("Erro: divisao por zero nao permitida.\n");
        return 0;  // Ou outro valor de erro, dependendo da sua lógica
    }

    return a / b;
}
