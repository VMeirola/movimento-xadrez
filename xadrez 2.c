#include <stdio.h>

int main() {
    // Movimento da Torre usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo usando while
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha usando do-while
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimento do Cavalo usando loops aninhados (for + while)
    printf("\nMovimento do Cavalo (2 casas para baixo, 1 para a esquerda):\n");
    int passos_baixo = 2;
    for (int i = 0; i < passos_baixo; i++) {
        printf("Baixo\n");
    }

    int passos_esquerda = 1;
    int contador = 0;
    while (contador < passos_esquerda) {
        printf("Esquerda\n");
        contador++;
    }

    return 0;
}
