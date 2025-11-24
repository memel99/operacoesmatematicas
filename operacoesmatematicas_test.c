#include <assert.h>
#include <stdio.h>

int multiplicar(int a, int b);
int dividir(int a, int b);

int main() {
    // Testes de multiplicação
    assert(multiplicar(2, 3) == 6);
    assert(multiplicar(-4, 5) == -20);

    // Testes de divisão
    assert(dividir(10, 2) == 5);
    assert(dividir(-20, 4) == -5);

    printf("Todos os testes passaram com sucesso!\n");

    return 0;
}
