#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Declaração do tabuleiro 10x10 inicializado com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Coordenadas iniciais dos navios (definidas no código)
    int linhaNavioVertical = 2, colunaNavioVertical = 4;
    int linhaNavioHorizontal = 6, colunaNavioHorizontal = 1;

    // Posicionamento do navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3;
    }

    // Posicionamento do navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = 3;
    }

    // Exibição do tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
