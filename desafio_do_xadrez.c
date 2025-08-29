#include <stdio.h>

int main() {
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
    // Movimento da torre
    printf("Movimento do Bispo:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Cima, Direita\n");
    }
    printf("\n");
    // Movimento do bispo
    printf("Movimento da Rainha:\n");
    for (int i = 1; i <= 8; i++) {
        printf("Esquerda\n");
    }
    printf("\n");
    // Movimento da rainha
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= 3; i++) {
        while (i<3) {
            printf("Baixo\n");
            i++;
        }
        printf("Esquerda\n");
        }
    printf("\n");
    // Movimento do cavalo
    return 0;
}
