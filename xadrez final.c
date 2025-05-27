
// Victor de Souza Meirola
// Gestão da Tecnologia da Informação
// Desafio Final - Movimentos Complexos em C (Xadrez)

#include <stdio.h>

// Movimento recursivo da Torre - 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento recursivo da Rainha - 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento recursivo do Bispo - 5 casas na diagonal (Cima Direita)
// + Loops aninhados para mostrar lógica vertical e horizontal
void moverBispo(int i, int max) {
    if (i == max) return;
    
    // Loop externo: vertical (Cima)
    for (int v = i; v <= i; v++) {
        // Loop interno: horizontal (Direita)
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }
    moverBispo(i + 1, max);
}

// Movimento do Cavalo - 2 para cima e 1 para direita (usando loops complexos)
void moverCavalo() {
    int vertical = 2;
    int horizontal = 1;
    int i, j;

    for (i = 0; i < vertical + 1; i++) {
        for (j = 0; j < horizontal + 1; j++) {
            if (i < vertical)
                printf("Cima\n");
            else if (j < horizontal)
                printf("Direita\n");
            else
                break;
        }
    }
}

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Linha em branco
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(0, 5);

    // Linha em branco
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    // Linha em branco
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
