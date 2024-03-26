#include <stdio.h>

// Função removida pois não é utilizada
// int multiplicacao(int a, int b) {
//     return a * b;
// }

int main() {
    int x = 5;
    int y = 3;

    // Remoção de declaração de variável não utilizada
    // int resultado;

    // Correção de erro lógico na condição
    if (x > 0) {
        printf("O valor de x é positivo\n");
    } else {
        printf("O valor de x é negativo\n");
    }

    // Remoção de declaração de variável não utilizada
    // int z = 10;

    // Remoção de bloco de código redundante
    // if (y < 0) {
    //     printf("O valor de y é negativo\n");
    // } else {
    //     printf("O valor de y é positivo\n");
    // }

    // Correção de erro lógico na condição
    if (y < 0) {
        printf("O valor de y é negativo\n");
    } else if (y > 0) {
        printf("O valor de y é positivo\n");
    } else {
        printf("O valor de y é zero\n");
    }

    return 0;
}
