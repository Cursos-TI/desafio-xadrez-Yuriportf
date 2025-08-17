#include <stdio.h>

int main() {
    const int bispo = 5;
    const int torre = 5;
    const int rainha = 8;

    printf("Movimento do Bispo:\n");
    for (int i = 0; i < bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento da Rainha:\n");
    for (int i = 0; i < rainha; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
