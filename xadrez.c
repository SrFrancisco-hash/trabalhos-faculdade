#include <stdio.h>

int main() {
    
    // Movimento da Torre usando FOR
    const int Torre = 5; 
    printf("Movimento da Torre (5 casas para a direita):\n");

    for (int i = 1; i <= Torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo usando WHILE
    const int Bispo = 5; 
    int j = 1;

    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");

    while (j <= Bispo) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha usando DO-WHILE
    const int Rainha = 8; 
    int k = 1;

    printf("Movimento da Rainha (8 casas para a esquerda):\n");

    do {
        printf("Esquerda\n");
        k++;
    } while (k <= Rainha);

    printf("\nFim.\n");

    return 0;
}
