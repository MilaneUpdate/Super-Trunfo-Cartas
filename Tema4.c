#include <stdio.h>                           // Biblioteca padão de entrada e saída

int main() {                                  // Função princial deo programa
    // === Movimento da TORRE: 5 casas para a direita ===
    printf("Movimento da Torre:\n");          // Imprime o título do morvimento da torre
    for (int i = 0; i < 5; i++) {             // Loop para imprimir 5 vezes
        printf("Direita\n");                  // Imprime a direção do movimento
    }

    // === Movimento do BISPO: 5 casas na diagonal cima-direita ===
    printf("\nMovimento do Bispo:\n");        // Imprime o título do movimento do bispo
    int j = 0;                                // Inicializa o contador para o movimento do bispo
    while (j < 5) {                           // Loop para imprimir 5 vezes
        printf("Cima Direita\n");             // Imprimea direção do movimento
        j++;                                  // Incrementa o contador
    }

    // === Movimento da RAINHA: 8 casas para a esquerda ===
    printf("\nMovimento da Rainha:\n");       // Imprime o título do movimento da rainha
    int k = 0;                                // Inicializa o contador para o movimento da rainha
    do {                                      // Loop para imprimir 8 vezes
        printf("Esquerda\n");                 // Imprime a direção do movimento
        k++;                                  // Incrementa o contador
    } while (k < 8);                          // Condição do loop para continuar enquanto k for menor que 8

    return 0;                                 // Retorna 0 para indicar que o programa terminou com sucesso
}