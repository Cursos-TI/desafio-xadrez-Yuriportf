#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

#define BISEP_DIAG 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

void bispo(int casas, int linha, int coluna) {
    if (casas == 0) return;
    linha++;
    coluna++;
    printf("Bispo: Cima-Direita -> (%d, %d)\n", linha, coluna);
    bispo(casas - 1, linha, coluna);
}

void torre() {
    for (int i = 1; i <= TORRE_PASSOS; i++) {
        printf("Torre: Direita -> (%d)\n", i);
    }
}

void rainha() {
    for (int i = RAINHA_PASSOS; i >= 1; i--) {
        printf("Rainha: Esquerda -> (%d)\n", i);
    }
}

void cavalo() {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Cavalo: Baixo -> (-1)\n");
                continue;
            }
            printf("Cavalo: Esquerda -> (-2)\n");
            break;
        }
    }
}

int main() {
    int linha_inicial = 0;
    int coluna_inicial = 0;

    bispo(BISEP_DIAG, linha_inicial, coluna_inicial);
    torre();
    rainha();
    cavalo();

    return 0;
}
